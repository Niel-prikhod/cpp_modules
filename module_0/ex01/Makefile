NAME = phone_book
CC = c++
WFLAGS = -Wextra -Wall -Werror -std=c++98 -I.

SRCS = main.cpp PhoneBook.cpp Contact.cpp

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(WFLAGS) $(SRCS) -o $(NAME)

clean:

fclean: clean
	rm $(NAME)

re: fclean all
