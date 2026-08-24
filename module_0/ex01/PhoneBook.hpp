#if !defined(PHONE_BOOK_HPP)
#define PHONE_BOOK_HPP

#include <cstddef>
#include "Contact.hpp"

class PhoneBook {
public:
	static const std::size_t MAX_CONTACTS = 8;
	void add_contact(const Contact& contact);
	const Contact& get_contact(const std::size_t index) const;
	std::size_t get_size(void) const;

	PhoneBook();

private:
	std::size_t size_;
	Contact contacts_[MAX_CONTACTS];
};

#endif
