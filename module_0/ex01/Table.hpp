#if !defined(TABLE_HPP)
#define TABLE_HPP

#include <iostream>
#include <iomanip>

#define SEARCH_MAX_LENGTH 10U

#define CMDS "\'ADD\' \'SEARCH\' \'EXIT\'\n\n"

#define WRITE_TO_TABLE(STRING) \
		std::cout << std::setw(SEARCH_MAX_LENGTH) << std::right << (STRING) << '|'

#endif // TABLE_HPP
