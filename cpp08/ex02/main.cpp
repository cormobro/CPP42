#include "MutantStack.hpp"
#include <list>

void	list()
{
	std::list< int >	lst;
	unsigned int		n;

	std::cout << std::endl << "---------LIST---------" << std::endl;
	lst.push_back( 5 );
	lst.push_back( 17 );
	std::cout << "\nTop element: " << lst.back() << std::endl;
	std::cout << "size: " << lst.size() << std::endl;

	lst.pop_back();

	std::cout << "\nTop element: " << lst.back() << std::endl;
	std::cout << "size: " << lst.size() << std::endl;

	lst.push_back( 3 );
	lst.push_back( 5 );
	lst.push_back( 737 );
	lst.push_back( 0 );

	std::cout << "\nTop element: " << lst.back() << std::endl;
	std::cout << "size: " << lst.size() << "\n" << std::endl;

	std::list< int >::iterator it = lst.begin();
	std::list< int >::iterator ite = lst.end();
	++it;
	--it;
	n = 0;
	while ( it != ite )
	{
		std::cout << "lst [ " << n << " ]: " << *it << std::endl;
		++it;
		n++;
	}
}

int main( void )
{
	MutantStack< int >	mutantstack;
	unsigned int		n;

	std::cout << std::endl << "---------MUTANT STACK---------" << std::endl;
	mutantstack.push( 5 );
	mutantstack.push( 17 );

	std::cout << "\nTop element: " << mutantstack.top() << std::endl;
	std::cout << "size: " << mutantstack.size() << std::endl;

	mutantstack.pop();

	std::cout << "\nTop element: " << mutantstack.top() << std::endl;
	std::cout << "size: " << mutantstack.size() << std::endl;

	mutantstack.push( 3 );
	mutantstack.push( 5 );
	mutantstack.push( 737 );
	mutantstack.push( 0 );

	std::cout << "\nTop element: " << mutantstack.top() << std::endl;
	std::cout << "size: " << mutantstack.size() << "\n" << std::endl;

	MutantStack< int >::iterator it = mutantstack.begin();
	MutantStack< int >::iterator ite = mutantstack.end();
	++it;
	--it;
	n = 0;
	while ( it != ite )
	{
		std::cout << "MutantStack [ " << n << " ]: " << *it << std::endl;
		++it;
		n++;
	}

	std::cout << "\n\nCopy MutantStack to Stack with copy constructor" << std::endl;
	std::stack< int >	s( mutantstack );

	std::cout << "\nTop element of stack: " << s.top() << std::endl;
	std::cout << "stack size: " << s.size() << std::endl;

	std::cout << "\nPop top element of MutantStack" << std::endl;
	s.pop();

	std::cout << "\nTop element of Stack: " << s.top() << std::endl;
	std::cout << "Stack size: " << s.size() << std::endl;


	std::cout << "\n\nCopy MutantStack to Stack with assignment operator" << std::endl;
	std::stack< int >	s2;
	s2 = mutantstack;

	std::cout << "\nTop element of stack: " << s2.top() << std::endl;
	std::cout << "stack size: " << s2.size() << std::endl;

	std::cout << "\nPop top element of MutantStack" << std::endl;
	s2.pop();

	std::cout << "\nTop element of Stack: " << s2.top() << std::endl;
	std::cout << "Stack size: " << s2.size() << std::endl;

	list();
	return ( 0 );
}
