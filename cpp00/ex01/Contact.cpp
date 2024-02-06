#include "Contact.hpp"

// Contact class methods
Contact::Contact()
{
	firstName = "";
	lastName = "";
	nickname = "";
	phoneNumber = "";
	darkestSecret = "";
}

void Contact::setContactInfo() {
	firstName = "";
	lastName = "";
	nickname = "";
	phoneNumber = "";
	darkestSecret = "";
	while (!std::cin.eof() && firstName == "")
	{
		std::cout << "Enter First Name: ";
		if (std::getline(std::cin, firstName) && firstName != "" && isspace(firstName[0]) == false)
			break ;
		firstName = "";
	}
	while (!std::cin.eof() && lastName == "")
	{
		std::cout << "Enter Last Name: ";
		if (std::getline(std::cin, lastName) && lastName != "" && isspace(lastName[0]) == false)
			break ;
		lastName = "";
	}
	while (!std::cin.eof() && nickname == "")
	{
		std::cout << "Enter Nickname: ";
		if (std::getline(std::cin, nickname) && nickname != "" && isspace(nickname[0]) == false)
			break ;
		nickname = "";
	}
	while (!std::cin.eof() && phoneNumber == "")
	{
		std::cout << "Enter Phone Number: ";
		if (std::getline(std::cin, phoneNumber) && phoneNumber != "" && isspace(phoneNumber[0]) == false)
			break ;
		phoneNumber = "";
	}
	while (!std::cin.eof() && darkestSecret == "")
	{
		std::cout << "Enter Darkest Secret: ";
		if (std::getline(std::cin, darkestSecret) && darkestSecret != "" && isspace(darkestSecret[0]) == false)
			break ;
		darkestSecret = "";
	}
}

void Contact::displayContactInfo() {
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
