#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomyrequestform", 72, 45)
{
	std::cout << "Standard constructor has been called for RobotomyRequestForm" << std::endl;
	this->_target = "target";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : AForm("robotomyrequestform", 72, 45)
{
	std::cout << "Constructor has been called for RobotomyRequestForm" << std::endl;
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy.getName(), copy.getGradeSigned(), copy.getGradeExec())
{
	std::cout << "Copy constructor has been called for RobotomyRequestForm" << std::endl;
	this->_target = copy._target;
}

RobotomyRequestForm&	RobotomyRequestForm::operator = (const RobotomyRequestForm &copy)
{
	std::cout << "RobotomyRequestForm Copy assignment Operator Called "<< std::endl;
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->_target = copy._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm " << getName() << " has been destroyed" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (getSigned() == true)
	{
		if (getGradeExec() >= executor.getGrade())
		{
			srand(time(0));
			std::cout << executor.getName() << " makes some drilling noises" << std::endl;
			if ((rand() % 2 ) == 0)
				std::cout << this->_target << " has been robotomized" << std::endl;
			else
				std::cout << "The robotomy has failed, the target died ..." << std::endl;
		}
		else
		{
			std::cout << "RobotomyRequestForm " << getName() << "'s required grade is too high for the Bureaucrat " << executor.getName() << std::endl;
			throw GradeTooLowException();
		}
	}
	else
	{
		std::cout << "RobotomyRequestForm " << getName() << " is not signed" << std::endl;
		throw FormNotSigned();
	}
}
