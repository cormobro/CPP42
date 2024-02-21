#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubberycreationform", 145, 137)
{
	std::cout << "Standard constructor has been called for ShrubberyCreationForm" << std::endl;
	this->_target = "target";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("shrubberycreationform", 145, 137)
{
	std::cout << "Constructor has been called for ShrubberyCreationForm" << std::endl;
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy.getName(), copy.getGradeSigned(), copy.getGradeExec())
{
	std::cout << "Copy constructor has been called for ShrubberyCreationForm" << std::endl;
	this->_target = copy._target;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator = (const ShrubberyCreationForm &copy)
{
	if (this != &copy)
	{
		this->_target = copy._target;
	}
	return (*this);
	std::cout << "Overload operator '=' called for ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm " << getName() << " has been destroyed" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (getSigned() == true)
	{
		if (getGradeExec() >= executor.getGrade())
		{
			std::string	OutputName(this->_target);
			OutputName += "_shrubbery";
			std::ofstream	OutputFile(OutputName);

			if (OutputFile.is_open())
			{
				OutputFile << "/" << std::endl << " ├── bin" << std::endl << " ├── boot" << std::endl << "│   └── grub" << std::endl << "│       ├── fonts" << std::endl << "│       └── locale" << std::endl << " ├── cdrom" << std::endl << " └── dev" << std::endl;
				OutputFile.close();
			}
			else
			{
				std::cout << "Failed to open the output file" << std::endl;
			}
		}
		else
		{
			std::cout << "ShrubberyCreationForm " << getName() << "'s required grade is too high for the Bureaucrat " << executor.getName() << std::endl;
			throw GradeTooLowException();
		}
	}
	else
	{
		std::cout << "ShrubberyCreationForm " << getName() << " is not signed" << std::endl;
		throw FormNotSigned(); 
	}
}
