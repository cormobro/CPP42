#include "PhoneBook.hpp"

// PhoneBook class methods
//PhoneBook::PhoneBook() : contactCount(0), _count(8) {}

PhoneBook::PhoneBook()
{
	contactCount = 0;
	_count = 8;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook has been destructed" << std::endl;
}

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
	for (unsigned long i = 0; i < command.length(); i++)
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
