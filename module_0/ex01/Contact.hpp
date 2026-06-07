#if !defined(CONTACT_HPP)
#define CONTACT_HPP

#include <string>

class Contact {
public: 
	std::string first_name_;
	std::string last_name_;
	std::string nickname_;
	std::string phone_number_;
	std::string secret_;

	Contact();
	Contact(const std::string& first_name,
			const std::string& last_name,
			const std::string& nickname,
			const std::string& phone_number,
			const std::string& secret);

};

#endif
