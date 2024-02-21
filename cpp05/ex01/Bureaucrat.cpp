#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat")
{
	std::cout << "Standard Constructor has been called for Bureaucrat" << std::endl;
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

unsigned int	Bureaucrat::getGrade() const
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

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat::GradeTooHighException");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat::GradeTooLowException");
}

std::ostream& operator << (std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}

void	Bureaucrat::signForm(Form& form) const
{
	form.beSigned(*this);
	if (this->_grade < form.getGradeSigned())
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	else
		std::cout << this->_name << " couldn't sign " << form.getName() << " because the required grade to sign is " << form.getGradeSigned() << " and the bureaucrat grade is " << this->_grade << std::endl;

}
