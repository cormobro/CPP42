#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Form
{
	private:
		const std::string	_name;
		bool			_signed;
		const unsigned int	_gradeSigned;
		const unsigned int	_gradeExec;
	public:
		Form(void);
		Form(const std::string name, const unsigned int gradeSigned, const unsigned int gradeExec);
		Form(Form& copy);
		Form& operator = (const Form &copy);
		~Form();
		std::string	getName() const;
		unsigned int	getGradeSigned() const;
		unsigned int	getGradeExec() const;
		bool		getSigned() const;
		void		beSigned(const Bureaucrat& bureaucrat);
		class GradeTooHighException : std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator << (std::ostream& os, const Form& form);

#endif
