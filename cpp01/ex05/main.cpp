#include "Harl.hpp"

int	main()
{
	Harl	lol = Harl();
	lol.complain("DEBUG");
	lol.complain("INFO");
	lol.complain("WARNING");
	lol.complain("ERROR");
	lol.complain("ERRORR");
	lol.complain("error");
	lol.complain("ERROR ");
	return (0);
}
