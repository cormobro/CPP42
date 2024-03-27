#include "iter.hpp"

void	ft_switchMtoP(char &chr)
{
	if (chr == 'M')
		chr = 'P';
}

void	ft_switchMtoB(std::string &str)
{
	if (str[0] == 'M')
		str[0] = 'B';
}

void	ft_incrementNum(int &num)
{
	num += 1;
}

int	main(void)
{
	char	array[20] = "Ma phrase d'origine";
	std::string	stringarr[5];
	int	numarr[5] = {0, 1, 2, 3, 4};

	for (int i = 0; i < 5; i++)
		stringarr[i] = "Ma phrase d'origine";
	std::cout << "Original string : '" << array << "'" << std::endl;
	iter(array, 20, ft_switchMtoP);
	std::cout << "After iter : '" << array << "'\n" << std::endl;
	std::cout << "Original string : '" << stringarr[0] << "'" << std::endl;
	iter(stringarr, 5, ft_switchMtoB);
	for (int i = 0; i < 5; i++)
		std::cout << "After iter: '" << stringarr[i] << "'" << std::endl;
	std::cout << "\n" << "Original numbers : '" << numarr[0] << " " << numarr[1] << " " << numarr[2] << " " << numarr[3] << " " << numarr[4] << "'" << std::endl;
	iter(numarr, 5, ft_incrementNum);
	std::cout << "After iter : '" << numarr[0] << " " << numarr[1] << " " << numarr[2] << " " << numarr[3] << " " << numarr[4] << "'" << std::endl;
	return (0);
}
