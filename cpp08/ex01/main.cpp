#include "Span.hpp"
#include <vector>

void	testCopy( void )
{
	Span	sp( 6 );
	Span	sp2( 3 );

	sp.addNumber(0);
	sp.addNumber(1);
	sp.addNumber(2);
	sp.addNumber(3);
	sp.addNumber(4);
	sp.addNumber(5);
	sp2.addNumber(0);
	sp2.addNumber(1);
	sp2.addNumber(2);
	std::cout << "sp -> " << sp << std::endl;
	Span	copy( sp );
	std::cout << "copy -> " << copy << std::endl;
	std::cout << "sp2 -> " << sp2 << std::endl;
	copy = sp2;
	std::cout << "copy -> " << copy << std::endl;
}

void	testAddNumberOne( void )
{
	Span	sp( 10 );

	sp.addNumber( 0 );
	std::cout << sp << std::endl;
	sp.addNumber( INT_MIN );
	std::cout << sp << std::endl;
	sp.addNumber( INT_MAX );
	std::cout << sp << std::endl;
	for ( int i = 1; i < 8; i++ )
		sp.addNumber( i );
	std::cout << sp << std::endl;
	try
	{
		sp.addNumber( 0 );
	}
	catch ( const std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}
}

void	testAddNumberTwo( void )
{
	Span					sp( 10 );
	Span					sp2( 9 );
	std::vector< int >	arr;

	for (int i = 0; i < 10; i++)
		arr.push_back(i);

	std::cout << "arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }" << std::endl;
	std::cout << "sp -> " << sp << std::endl;
	sp.addNumbers<std::vector<int>>(arr.begin(), arr.end());
	std::cout << "sp -> " << sp << std::endl;
	std::cout << "arr = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }" << std::endl;
	std::cout << "sp2 -> " << sp2 << std::endl;
	try
	{
		sp.addNumbers<std::vector<int>>(arr.begin(), arr.end());
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "sp2 -> " << sp2 << std::endl;
}

void	testFindSpan( void )
{
	Span	sp( 30000 );

	sp.addNumber( 0 );
	std::cout << "sp -> " << sp << std::endl;
	try
	{
		std::cout << "Shortest span is: " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	sp.addNumber( INT_MAX );
	sp.addNumber( 12 );
	sp.addNumber( 7 );
	sp.addNumber( INT_MIN );
	std::cout << "sp -> " << sp << std::endl;
	std::cout << "Shortest span is: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span is: " << sp.longestSpan() << std::endl;
}

int main( void )
{
	testCopy();
	std::cout << std::endl << "---------------------------" << std::endl;
	testAddNumberOne();
	std::cout << std::endl << "---------------------------" << std::endl;
	testAddNumberTwo();
	std::cout << std::endl << "---------------------------" << std::endl;
	testFindSpan();
    return ( 0 );
}
