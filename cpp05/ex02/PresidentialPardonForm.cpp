#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("presidentialpardonform", 25, 5)
{
	std::cout << "Standard constructor has been called for PresidentialPardonForm" << std::endl;
	this->_target = "target";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("presidentialpardonform", 25, 5)
{
	std::cout << "Constructor has been called for PresidentialPardonForm" << std::endl;
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy.getName(), copy.getGradeSigned(), copy.getGradeExec())
{
	std::cout << "Copy constructor has been called for PresidentialPardonForm" << std::endl;
	this->_target = copy._target;
}

PresidentialPardonForm&	PresidentialPardonForm::operator = (const PresidentialPardonForm &copy)
{
	std::cout << "PresidentialPardonForm Copy assignment Operator Called "<< std::endl;
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->_target = copy._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm " << getName() << " has been destroyed" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (getSigned() == true)
	{
		if (getGradeExec() >= executor.getGrade())
			std::cout << this->_target << " has been pardoned by Zaphod Beeblerox" << std::endl;
		else
		{
			std::cout << "PresidentialPardonForm " << getName() << "'s required grade is too high for the Bureaucrat " << executor.getName() << std::endl;
			throw GradeTooLowException();
		}
	}
	else
	{
		std::cout << "PresidentialPardonForm " << getName() << " is not signed" << std::endl;
		throw FormNotSigned();
	}
}
