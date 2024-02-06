#include "PhoneBook.hpp"


// Contact class methods
Contact::Contact() : firstName(""), lastName(""), nickname(""), phoneNumber(""), darkestSecret("") {}

void Contact::setContactInfo() {
	firstName = "";
	lastName = "";
	nickname = "";
	phoneNumber = "";
	darkestSecret = "";
	while (!std::cin.eof() && firstName == "")
	{
		std::cout << "Enter First Name: ";
		if (std::getline(std::cin, firstName) && firstName != "")
			break ;
	}
	while (!std::cin.eof() && lastName == "")
	{
		std::cout << "Enter Last Name: ";
		if (std::getline(std::cin, lastName) && lastName != "")
			break ;
	}
	while (!std::cin.eof() && nickname == "")
	{
		std::cout << "Enter Nickname: ";
		if (std::getline(std::cin, nickname) && nickname != "")
			break ;
	}
	while (!std::cin.eof() && phoneNumber == "")
	{
		std::cout << "Enter Phone Number: ";
		if (std::getline(std::cin, phoneNumber) && phoneNumber != "")
			break ;
	}
	while (!std::cin.eof() && darkestSecret == "")
	{
		std::cout << "Enter Darkest Secret: ";
		if (std::getline(std::cin, darkestSecret) && darkestSecret != "")
			break ;
	}
}

void Contact::displayContactInfo() {
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

// PhoneBook class methods
PhoneBook::PhoneBook() : contactCount(0), _count(8) {}

void PhoneBook::addContact() {
	if (contactCount < maxContacts)
	{
		contacts[contactCount].setContactInfo();
		contactCount++;
	}
	else
	{
		contacts[_count % 8].setContactInfo();
		_count++;
	}
}

void PhoneBook::searchContacts() {
	if (contactCount == 0) {
		std::cout << "Phonebook is empty." << std::endl;
		return;
	}

	// Display contacts as a list
	std::cout << std::setw(10) << std::right << "Index" << "|" << std::setw(10) << std::right << "First Name" << "|" << std::setw(10) << std::right << "Last Name" << "|" << std::setw(10) << std::right << "Nickname" << "|" << std::endl;

	for (int i = 0; i < contactCount; ++i) {
		std::cout << std::setw(10) << std::right << i << "|" << std::setw(10) << std::right << (contacts[i].getFirstName().length() > 10 ? contacts[i].getFirstName().substr(0, 9) + "." : contacts[i].getFirstName()) << "|" << std::setw(10) << std::right << (contacts[i].getLastName().length() > 10 ? contacts[i].getLastName().substr(0, 9) + "." : contacts[i].getLastName()) << "|" << std::setw(10) << std::right << (contacts[i].getNickname().length() > 10 ? contacts[i].getNickname().substr(0, 9) + "." : contacts[i].getNickname()) << "|" << std::endl;
	}

	// Prompt user for index
	double index;
	std::string command;
	command = "";
	while (!std::cin.eof() && command == "")
	{
		std::cout << "Enter the index of the entry to display: ";
		if (std::getline(std::cin, command) && command != "")
			break ;
	}
	for (int i = 0; i < command.length(); i++)
	{
		if (!isdigit(command[i]))
		{
			std::cout << "Invalid index." << std::endl;
			return ;
		}
	}
	index = stod(command);
	if (index >= 0 && index < contactCount && index <= 7) {
		contacts[(int)index].displayContactInfo();
	} else {
		std::cout << "Invalid index." << std::endl;
	}
}

int main() {
	PhoneBook phonebook;
	std::string command;

	while (true) {
		command = "";
		while (!std::cin.eof() && command == "")
		{
			std::cout << "Enter command (ADD, SEARCH, EXIT): ";
			if (std::getline(std::cin, command) && command != "")
				break ;
		}

		if (command == "ADD") {
			phonebook.addContact();
		} else if (command == "SEARCH") {
			phonebook.searchContacts();
		} else if (command == "EXIT") {
			break;
		} else {
			std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT." << std::endl;
		}
	}

	return 0;
}
