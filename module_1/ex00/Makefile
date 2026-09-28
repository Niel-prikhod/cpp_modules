NAME = zombie

SRCS = Zombie.cpp

LFLAGS = -I.
CFLAGS = -Wextra -Wall -Werror 

all: $(NAME)

%.c=%.o:
	g++ $(CFLAGS) $(SRCS) -c $(OBJS)

$(NAME):
	g++ $(LFLAGS) $(OBJS) -o $(NAME)

