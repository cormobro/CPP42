#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main()
{
	try
	{
		/*Bureaucrat	fonctionnaire("Felix", 100);
		Form		formulaire("kamoulox", 101, 150);
		std::cout << formulaire.getName() << std::endl;
		std::cout << formulaire.getGradeSigned() << std::endl;
		std::cout << formulaire.getGradeExec() << std::endl;
		std::cout << formulaire.getSigned() << std::endl;
		formulaire.beSigned(fonctionnaire);
		std::cout << formulaire << std::endl;*/
		ShrubberyCreationForm	test("gg");
		Bureaucrat		fonctionnaire("Felix", 1);
		Intern  someRandomIntern;
		AForm*	testt;
		testt = someRandomIntern.makeForm("robotomy", "the target");
		testt->beSigned(fonctionnaire);
    		AForm*	rrf;
    		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf->beSigned(fonctionnaire);
		rrf->execute(fonctionnaire);
		fonctionnaire.executeForm(*rrf);
		//test.beSigned(fonctionnaire);
		//fonctionnaire.signForm(test);
		//test.execute(fonctionnaire);
		//RobotomyRequestForm	test2("fel");
		//fonctionnaire.signForm(test2);
		//fonctionnaire.executeForm(test2);
		//PresidentialPardonForm	test3("marco");
		//test3.beSigned(fonctionnaire);
		//fonctionnaire.executeForm(test3);
	}
	catch (const Intern::UnexistentForm& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const AForm::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const AForm::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const AForm::FormNotSigned& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
