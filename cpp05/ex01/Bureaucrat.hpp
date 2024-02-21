#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		unsigned int		_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(const std::string name, unsigned int grade);;
		Bureaucrat(Bureaucrat& copy);
		Bureaucrat& operator = (const Bureaucrat &copy);
		~Bureaucrat();
		std::string	getName() const;
		unsigned int	getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
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
		void		signForm(Form& form) const;
};

std::ostream& operator << (std::ostream& os, const Bureaucrat& bureaucrat);

#endif
