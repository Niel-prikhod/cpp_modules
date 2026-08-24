#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include "PhoneBook.hpp"
#include "Table.hpp"

#define SIZE_T_ERR static_cast<std::size_t>(-1)

// Forward declarations.
static std::string read_line(const std::string& prompt);
static int search_contact(const PhoneBook &book);
static int fill_contact(PhoneBook &book);
static std::size_t input_index(std::size_t size);

int main(void) {
	std::cout << "PhoneBook v0.0.1" << "\n";
	PhoneBook book;
	std::string cmd = "";
	int ret_val = 0;

	while (true) {
		std::cout << std::endl << "Available commands: " << CMDS;
		if (!std::getline(std::cin, cmd)) {
			break;
		}

		if (cmd == "ADD") {
			ret_val = fill_contact(book);
		} else if (cmd == "SEARCH") {
			ret_val = search_contact(book);
		} else if (cmd == "EXIT") {
			return EXIT_SUCCESS;
		} else {
			std::cout << "Wrong cmd" << std::endl;
			continue;
		}

		if (ret_val != EXIT_SUCCESS) {
			return ret_val;
		}
	}

	return EXIT_SUCCESS;
}

static std::string read_line(const std::string& prompt) {
	std::string line;

	std::cout << prompt;
	if (!std::getline(std::cin, line)) {
		std::cout << std::endl;
		std::cin.setstate(std::ios_base::badbit);
		return line;
	}
	if (line.empty()) {
		std::cout << "Empty line, try again...\n";
		return read_line(prompt);
	}
	return line;
}

static int fill_contact(PhoneBook &book) {
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string secret;

	first_name = read_line("Enter the first name: ");
	last_name = read_line("Enter the last name: ");
	nickname = read_line("Enter the nickname: ");
	phone_number = read_line("Enter the phone number: ");
	secret = read_line("Enter the secret: ");
	std::cout << "\n";

	Contact contact(first_name, last_name, nickname, phone_number, secret);
	book.add_contact(contact);
	return EXIT_SUCCESS;
}

static std::size_t input_index(std::size_t size) {
	std::string input_string = read_line("Choose the index: ");
	std::istringstream iss(input_string);
	std::size_t index = 0;

	if (!(iss >> index)) {
		std::cout << "Invalid index\n";
		return SIZE_T_ERR;
	}
	iss >> std::ws;
	if (!iss.eof()) {
		std::cout << "Invalid index\n";
		return SIZE_T_ERR;
	} else if (index >= size){
		std::cout << "Index is out of bounds\n";
		return SIZE_T_ERR;
	} else {
		return index;
	}
}

static int search_contact(const PhoneBook &book) {
	std::size_t size_of_book = book.get_size();
	std::size_t index;
	Contact contact;

	if (size_of_book == 0) {
		std::cout << "Phone book is empty now\n";
		return EXIT_SUCCESS;
	}
	WRITE_TO_TABLE("index"); 
	WRITE_TO_TABLE("first name");
	WRITE_TO_TABLE("last name");
	WRITE_TO_TABLE("nickname") << std::endl;

	for (std::size_t i = 0; i < size_of_book; i++) {
		contact = book.get_contact(i);
		contact.displayRow(i);
	}

	index = input_index(size_of_book);
	if (index == SIZE_T_ERR) {
		return EXIT_SUCCESS;
	} else {
		book.get_contact(index).display();
	}

	return EXIT_SUCCESS;
}
