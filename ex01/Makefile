# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvieira <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/05 19:38:38 by fvieira           #+#    #+#              #
#    Updated: 2023/05/05 19:38:39 by fvieira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

CC = c++

C_FLAGS = -Wall -Werror -Wextra -std=c++98

#SRC = PhoneBook.cpp \
#	Contact.cpp

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(C_FLAGS) $(SRC) -o $(NAME)
	
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

run: re
	valgrind ./ex01

.SILENT:
