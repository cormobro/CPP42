#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern
{
	private:
		std::string		_forms[3];
		AForm*			(Intern::*_makeForm[3])(std::string target);
	public:
		Intern();
		Intern(Intern& copy);
		Intern&	operator = (const Intern &copy);
		~Intern();
		AForm*	makeForm(const std::string name, const std::string target);
		AForm*	makePresidentialPardonForm(const std::string target);
		AForm*	makeRobotomyRequestForm(const std::string target);
		AForm*	makeShrubberyCreationForm(const std::string target);
};

#endif
