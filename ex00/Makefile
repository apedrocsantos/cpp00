# https://askubuntu.com/questions/1449769/clang-cannot-find-iostream
# clang++ -v -E
# ls /usr/include/c++/

# INCLUDE = -I/usr/include/c++/11 -I/usr/include/x86_64-linux-gnu/c++/11 -L /usr/lib/gcc/x86_64-linux-gnu/11

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Megaphone

SRCS =	megaphone.cpp\

all: $(NAME)

$(NAME) : $(SRCS)
	$(CC) $(INCLUDE) $(CFLAGS) $^ -o $(NAME) -g

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re