#include "Bureaucrat.hpp"

int	main()
{
	try
	{
		Bureaucrat test("Felix", 149);
		Bureaucrat overloadCopy;
		overloadCopy = test;
		Bureaucrat testt( test );
		std::cout << "Copy: " << testt.getGrade() << " " << testt.getName() << std::endl;
		std::cout << "Grade: " << test.getGrade() << " Name: " << test.getName() << std::endl;
		test.incrementGrade();
		std::cout << "Grade: " << test.getGrade() << " Name: " << test.getName() << std::endl;
		test.decrementGrade();
		std::cout << "Grade: " << test.getGrade() << " Name: " << test.getName() << std::endl;
		overloadCopy.incrementGrade();
		std::cout << "OverloadOperator: " << overloadCopy.getGrade() << " " << overloadCopy.getName() << std::endl;
		std::cout << test << std::endl;
		//Bureaucrat toomuch("Mike", 151);
		Bureaucrat toolow("George", 0);
	}
	catch (const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
