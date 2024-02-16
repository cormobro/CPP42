/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: febonaer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 15:43:09 by febonaer          #+#    #+#             */
/*   Updated: 2024/02/07 15:43:10 by febonaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iomanip>
#include <iostream>

int	main()
{
	std::string myString = "HI THIS IS BRAIN";
	std::string *stringPTR = &myString;
	std::string &stringREF = myString;

	//Memory address of string variable
	std::cout << &myString << std::endl;
	//Memory address of stringPTR
	std::cout << stringPTR << std::endl;
	//Memory address of stringREF;
	std::cout << &stringREF << std::endl;
	//Value of string variable
	std::cout << myString << std::endl;
	//Value pointed to by stringPTR
	std::cout << *stringPTR << std::endl;
	//Value pointed to by stringREF
	std::cout << stringREF << std::endl;
	return (0);
}
