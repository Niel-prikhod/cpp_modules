#include "PhoneBook.hpp"

PhoneBook::PhoneBook() 
	: size_(0)
{
	// Explicit default constructor
}

void PhoneBook::add_contact(const Contact& contact) {
	if (size_ < MAX_CONTACTS) {
		contacts_[size_] = contact;
		++size_;
	} else {
		for (std::size_t i = 1; i < MAX_CONTACTS; ++i) { 
			contacts_[i - 1] = contacts_[i];
		}
		contacts_[MAX_CONTACTS - 1] = contact;
	}
}
