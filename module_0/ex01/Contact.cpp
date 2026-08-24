#include <string>
#include <iostream>
#include "Contact.hpp"
#include "Table.hpp"

static std::string truncateWord(std::string word);

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

void Contact::display(void) const {
	std::cout << "First name: " << Contact::first_name_ << std::endl;
	std::cout << "Last name: " << Contact::last_name_ << std::endl;
	std::cout << "Nickname: " << Contact::nickname_ << std::endl;
	std::cout << "Phone number: " << Contact::phone_number_ << std::endl;
	std::cout << "Secret: " << Contact::secret_ << std::endl;
}

void Contact::displayRow(const std::size_t index) const {
	WRITE_TO_TABLE(index);
	WRITE_TO_TABLE(truncateWord(first_name_));
	WRITE_TO_TABLE(truncateWord(last_name_));
	WRITE_TO_TABLE(truncateWord(nickname_)) << std::endl;
}

static std::string truncateWord(std::string word) {
	if (word.length() > SEARCH_MAX_LENGTH) {
		std::string truncated = word.substr(0, SEARCH_MAX_LENGTH - 1U) + '.';
		return truncated;
	} else {
		return word;
	}
}
