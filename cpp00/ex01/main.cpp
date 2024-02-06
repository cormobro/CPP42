#include "PhoneBook.hpp"

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
