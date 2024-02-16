#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>

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
		unsigned int	getGrade();
		void		incrementGrade();
		void		decrementGrade();
		class GradeTooHighException : std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Bureaucrat::GradeTooHighException");
				}
		};
		class GradeTooLowException : std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Bureaucrat::GradeTooLowException");
				}
		};
};

#endif
