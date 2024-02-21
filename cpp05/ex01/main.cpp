#include "Form.hpp"

int	main()
{
	try
	{
		Bureaucrat	fonctionnaire("Felix", 100);
		Form		formulaire("kamoulox", 101, 150);
		std::cout << formulaire.getName() << std::endl;
		std::cout << formulaire.getGradeSigned() << std::endl;
		std::cout << formulaire.getGradeExec() << std::endl;
		std::cout << formulaire.getSigned() << std::endl;
		formulaire.beSigned(fonctionnaire);
		std::cout << formulaire << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
