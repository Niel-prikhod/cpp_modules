#include <iostream>
#include <string>
#include <cctype>

#define NL '\n'

std::string str_to_upper(const std::string& str) {
	std::string result;
	result.reserve(str.size());
	for (std::size_t i = 0; i < str.size(); ++i)
		result.push_back(std::toupper(static_cast<unsigned char>(str[i])));
	return result;
}

int main(int argc, char **argv) {
	std::string str("");
	std::string arg;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << NL;
	else {
		for (std::size_t i = 1; i < argc; i++) { 
			arg = str_to_upper(argv[i]);
			str.append(arg);
		}
		std::cout << str << NL;
	}
	return EXIT_SUCCESS;
}
