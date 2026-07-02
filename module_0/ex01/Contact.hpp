#include <string>

class Contact {
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string secret;
		Contact (std::string first_name, std::string last_name, 
				std::string nickname, std::string phone_number, 
				std::string secret);
};

Contact::Contact (std::string arg_first_name, std::string arg_last_name, 
				std::string arg_nickname, std::string arg_phone_number, 
				std::string arg_secret) {
	first_name = arg_first_name;
	last_name = arg_last_name;
	nickname = arg_nickname;
	phone_number = arg_phone_number;
	secret = arg_secret;
}
