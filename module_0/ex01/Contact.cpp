#include "Contact.hpp"

Contact::Contact()
{
	// Explicit default constructor
}

Contact::Contact(const std::string& first_name,
			 const std::string& last_name,
			 const std::string& nickname,
			 const std::string& phone_number,
			 const std::string& secret)
	: first_name_(first_name)
	, last_name_(last_name)
	, nickname_(nickname)
	, phone_number_(phone_number)
	, secret_(secret)
{
}
