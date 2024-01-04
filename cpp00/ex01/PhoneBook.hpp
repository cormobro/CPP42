#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook {
private:
    static const int maxContacts = 8;
    Contact contacts[maxContacts];
    int contactCount;

public:
    PhoneBook();
    void addContact();
    void searchContacts();
};
