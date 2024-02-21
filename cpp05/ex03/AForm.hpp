#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class	AForm
{
	private:
		const std::string	_name;
		bool			_signed;
		const unsigned int	_gradeSigned;
		const unsigned int	_gradeExec;
	public:
		AForm(void);
		AForm(const std::string name, const unsigned int gradeSigned, const unsigned int gradeExec);
		AForm(AForm& copy);
		AForm& operator = (const AForm &copy);
		~AForm();
		std::string	getName() const;
		unsigned int	getGradeSigned() const;
		unsigned int	getGradeExec() const;
		bool		getSigned() const;
		void		beSigned(const Bureaucrat& bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;
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
		class FormNotSigned : std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator << (std::ostream& os, const AForm& form);

#endif
