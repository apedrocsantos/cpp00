NAME = Phonebook

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS =	PhoneBook.cpp\
		Contact.cpp\
		main.cpp\

HPPS =	PhoneBook.hpp\
		Contact.hpp\

all: $(NAME)

$(NAME) : $(SRCS) $(HPPS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME) -g

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
