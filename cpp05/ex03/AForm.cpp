#include "AForm.hpp"

AForm::AForm() : _name("AForm"), _gradeSigned(100), _gradeExec(100)
{
	std::cout << "Standard constructor has been called for AForm" << std::endl;
	this->_signed = false;
}

AForm::AForm(const std::string name, const unsigned int gradeSigned, const unsigned int gradeExec) : _name(name), _gradeSigned(gradeSigned), _gradeExec(gradeExec)
{
	if (gradeSigned < 1 || gradeExec < 1)
		throw GradeTooHighException();
	else if (gradeSigned > 150 || gradeExec > 150)
		throw GradeTooLowException();
	this->_signed = false;
	std::cout << "Constructor has been called for AForm " << name << std::endl;
}

AForm::AForm(AForm& copy) : _name(copy._name), _gradeSigned(copy._gradeSigned), _gradeExec(copy._gradeExec)
{
	if (copy._gradeSigned < 1 || copy._gradeExec < 1)
		throw GradeTooHighException();
	else if (copy._gradeSigned > 150 || copy._gradeExec > 150)
		throw GradeTooLowException();
	this->_signed = copy._signed;
	std::cout << "Copy constructor has been called for AForm " << copy._name << std::endl;
}

AForm&	AForm::operator = (const AForm &copy)
{
	std::cout << "Copy assignment operator overload constructor has been called for AForm " << copy._name << std::endl;
	this->_signed = copy._signed;
	return (*this);
}

AForm::~AForm()
{
	std::cout << "Destructor has been called for AForm " << this->_name << std::endl;
}

std::string	AForm::getName() const
{
	return (this->_name);
}

unsigned int	AForm::getGradeSigned() const
{
	return (this->_gradeSigned);
}

unsigned int	AForm::getGradeExec() const
{
	return (this->_gradeExec);
}

bool		AForm::getSigned() const
{
	return (this->_signed);
}

void		AForm::beSigned(const Bureaucrat& bureaucrat)
{
	//bureaucrat.signForm(this->_name, this->_gradeSigned);
	if (bureaucrat.getGrade() > this->_gradeSigned)
		throw GradeTooLowException();
	this->_signed = true;
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return ("AForm::GradeTooHighException");
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return ("AForm::GradeTooLowException");
}

const char*	AForm::FormNotSigned::what() const throw()
{
	return ("AForm::FormNotSigned");
}

std::ostream& operator << (std::ostream& os, const AForm& form)
{
	if (form.getSigned() == true)
		os << "AForm: " << form.getName() << " is signed, requires " << form.getGradeSigned() << " to be signed and " << form.getGradeExec() << " to be executed";
	else
		os << "AForm: " << form.getName() << " is not signed, requires " << form.getGradeSigned() << " to be signed and " << form.getGradeExec() << " to be executed";
	return (os);
}
