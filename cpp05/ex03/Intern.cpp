#include "Intern.hpp"

Intern::Intern()
{
	_forms[0] = "presidential pardon";
	_forms[1] = "robotomy request";
	_forms[2] = "shrubbery creation";
	_makeForm[0] = &Intern::makePresidentialPardonForm;
	_makeForm[1] = &Intern::makeRobotomyRequestForm;
	_makeForm[2] = &Intern::makeShrubberyCreationForm;
	std::cout << "Standard constructor has been called for Intern" << std::endl;
}

Intern::Intern(Intern &copy)
{
	*this = copy;
	std::cout << "Copy constructor has been called for Intern" << std::endl;
}

Intern&	Intern::operator = (const Intern &copy)
{
	std::cout << "Copy assignment operator overload constructor has been called for Intern" << std::endl;
	(void)copy;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern has been destroyed" << std::endl;
}

AForm*	Intern::makeForm(const std::string name, const std::string target)
{
	AForm*	res = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (name == this->_forms[i])
			res = (this->*_makeForm[i])(target);
	}
	if (res == NULL)
		throw UnexistentForm();
	return (res);
}

AForm*	Intern::makePresidentialPardonForm(const std::string target)
{
	std::cout << "Intern creates " << target << " presidential pardon form" << std::endl;
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::makeRobotomyRequestForm(const std::string target)
{
	std::cout << "Intern creates " << target << " robotomy request form" << std::endl;
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::makeShrubberyCreationForm(const std::string target)
{
	std::cout << "Intern creates " << target << " shrubbery creation form" << std::endl;
	return (new ShrubberyCreationForm(target));
}

const char*	Intern::UnexistentForm::what() const throw()
{
	return ("Intern::UnexistentForm");
}
