#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat")
{
	std::cout << "Constructor has been called for Bureaucrat" << std::endl;
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(const std::string name, unsigned int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
	std::cout << "Constructor has been called for Bureaucrat " << name << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy) : _name(copy._name)
{
	if (copy._grade < 1)
		throw GradeTooHighException();
	else if (copy._grade > 150)
		throw GradeTooLowException();
	std::cout << "Copy constructor has been called for Bureaucrat " << copy._name << std::endl;
	this->_grade = copy._grade;
}

Bureaucrat&	Bureaucrat::operator = (const Bureaucrat &copy)
{
	std::cout << "Copy assignment operator overload constructor has been called for Bureaucrat " << copy._name << std::endl;
	this->_grade = copy._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Destructor has been called for Bureaucrat " << this->_name << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade()
{
	return (this->_grade);
}

void		Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	this->_grade -= 1;
}

void		Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	this->_grade += 1;
}