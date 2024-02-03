NAME = Account

#INCLUDE = -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -L /usr/lib/gcc/x86_64-linux-gnu/11

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	Account.cpp\
		tests.cpp\

HPPS =	Account.hpp\

all: $(NAME)

$(NAME) : $(SRCS) $(HPPS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) -g

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re