NAME = zombie
CC	 = g++
BUILD 	= build

SRCS = Zombie.cpp \
	   main.cpp \
	   zombieHorde.cpp

OBJS = $(addprefix $(BUILD)/, $(SRCS:.cpp=.o))


LFLAGS = -I.
CFLAGS = -Wextra -Wall -Werror 

all: $(NAME)

$(BUILD): 
	mkdir -p $(BUILD)

$(BUILD)/%.o: %.cpp | $(BUILD)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(LFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(BUILD)

re: clean all
