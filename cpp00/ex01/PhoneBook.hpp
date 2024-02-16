#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
private:
    	static const int maxContacts = 8;
    	Contact contacts[maxContacts];
    	int contactCount;
	int	_count;

public:
    PhoneBook();
    ~PhoneBook();
    void addContact();
    void searchContacts();
};

#endif
