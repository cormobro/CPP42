#include "PhoneBook.hpp"

// Contact class methods
Contact::Contact() : firstName(""), lastName(""), nickname(""), phoneNumber(""), darkestSecret("") {}

void Contact::setContactInfo() {
	while (!std::cin.eof() && str == "")
	{
		std::cout << "Enter First Name: ";
		if (std::getline(std::cin, str) && str != "")
			this->_contacts[this->_index % 8].set_fname(str);
	}
	std::cout << "Enter First Name: ";
	std::getline(std::cin, firstName);

	std::cout << "Enter Last Name: ";
	std::getline(std::cin, lastName);

	std::cout << "Enter Nickname: ";
	std::getline(std::cin, nickname);

	std::cout << "Enter Phone Number: ";
	std::getline(std::cin, phoneNumber);

	std::cout << "Enter Darkest Secret: ";
	std::getline(std::cin, darkestSecret);
}

void Contact::displayContactInfo() {
	std::cout << "First Name: " << std::setw(10) << std::right << (firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName) << std::endl;
	std::cout << "Last Name: " << std::setw(10) << std::right << (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName) << std::endl;
	std::cout << "Nickname: " << std::setw(10) << std::right << (nickname.length() > 10 ? nickname.substr(0, 9) + "." : nickname) << std::endl;
	std::cout << "Phone Number: " << std::setw(10) << std::right << (phoneNumber.length() > 10 ? phoneNumber.substr(0, 9) + "." : phoneNumber) << std::endl;
	std::cout << "Darkest Secret: " << std::setw(10) << std::right << (darkestSecret.length() > 10 ? darkestSecret.substr(0, 9) + "." : darkestSecret) << std::endl;
}

// PhoneBook class methods
PhoneBook::PhoneBook() : contactCount(0) {}

void PhoneBook::addContact() {
	if (contactCount < maxContacts) {
		contacts[contactCount].setContactInfo();
		contactCount++;
	} else {
		// Replace the oldest contact by the new one
		std::cout << "Phonebook is full. Replacing the oldest contact." << std::endl;
		contacts[0].setContactInfo();
	}
}

void PhoneBook::searchContacts() {
	if (contactCount == 0) {
		std::cout << "Phonebook is empty." << std::endl;
		return;
	}

	// Display contacts as a list
	std::cout << std::setw(10) << std::right << "Index" << std::setw(10) << std::right << "First Name" << std::setw(10) << std::right << "Last Name" << std::setw(10) << std::right << "Nickname" << std::endl;

	for (int i = 0; i < contactCount; ++i) {
		std::cout << std::setw(10) << std::right << i << std::setw(10) << std::right << contacts[i].getFirstName() << std::setw(10) << std::right << contacts[i].getLastName() << std::setw(10) << std::right << contacts[i].getNickname() << std::endl;
	}

	// Prompt user for index
	int index;
	std::cout << "Enter the index of the entry to display: ";
	std::cin >> index;

	if (index >= 0 && index < contactCount) {
		contacts[index].displayContactInfo();
	} else {
		std::cout << "Invalid index." << std::endl;
	}
}

int main() {
	PhoneBook phonebook;
	std::string command;

	while (true) {
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::cin >> command;

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
