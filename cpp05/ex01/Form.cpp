#include "Form.hpp"

Form::Form() : _name("Form"), _gradeSigned(100), _gradeExec(100)
{
	std::cout << "Standard constructor has been called for Form" << std::endl;
	this->_signed = false;
}

Form::Form(const std::string name, const unsigned int gradeSigned, const unsigned int gradeExec) : _name(name), _gradeSigned(gradeSigned), _gradeExec(gradeExec)
{
	if (gradeSigned < 1 || gradeExec < 1)
		throw GradeTooHighException();
	else if (gradeSigned > 150 || gradeExec > 150)
		throw GradeTooLowException();
	this->_signed = false;
	std::cout << "Constructor has been called for Form " << name << std::endl;
}

Form::Form(Form& copy) : _name(copy._name), _gradeSigned(copy._gradeSigned), _gradeExec(copy._gradeExec)
{
	if (copy._gradeSigned < 1 || copy._gradeExec < 1)
		throw GradeTooHighException();
	else if (copy._gradeSigned > 150 || copy._gradeExec > 150)
		throw GradeTooLowException();
	this->_signed = copy._signed;
	std::cout << "Copy constructor has been called for Form " << copy._name << std::endl;
}

Form&	Form::operator = (const Form &copy)
{
	std::cout << "Copy assignment operator overload constructor has been called for Form " << copy._name << std::endl;
	this->_signed = copy._signed;
	return (*this);
}

Form::~Form()
{
	std::cout << "Destructor has been called for Form " << this->_name << std::endl;
}

std::string	Form::getName() const
{
	return (this->_name);
}

unsigned int	Form::getGradeSigned() const
{
	return (this->_gradeSigned);
}

unsigned int	Form::getGradeExec() const
{
	return (this->_gradeExec);
}

bool		Form::getSigned() const
{
	return (this->_signed);
}

void		Form::beSigned(const Bureaucrat& bureaucrat)
{
	//bureaucrat.signForm(this->_name, this->_gradeSigned);
	if (bureaucrat.getGrade() > this->_gradeSigned)
		throw GradeTooLowException();
	this->_signed = true;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return ("Form::GradeTooHighException");
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return ("Form::GradeTooLowException");
}

std::ostream& operator << (std::ostream& os, const Form& form)
{
	if (form.getSigned() == true)
		os << "Form: " << form.getName() << " is signed, requires " << form.getGradeSigned() << " to be signed and " << form.getGradeExec() << " to be executed";
	else
		os << "Form: " << form.getName() << " is not signed, requires " << form.getGradeSigned() << " to be signed and " << form.getGradeExec() << " to be executed";
	return (os);
}
