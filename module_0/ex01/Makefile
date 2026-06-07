NAME = phone_book
CC = c++
WFLAGG = -Wextra -Wall -Werror -std=c++98

SRCS = main.cpp PhoneBook.cpp Contact.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(WFLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm $(NAME)

re: fclean all
