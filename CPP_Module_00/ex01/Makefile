# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 10:28:16 by msaouab           #+#    #+#              #
#    Updated: 2022/05/06 11:06:43 by msaouab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AWESOME_PHONEBOOK

SRC =	Main.cpp\
		Utils.cpp\
		Contact.cpp\
		Phonebook.cpp\

OBJ = $(SRC:%.cpp=%.o)

CC = clang++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

INCLUDE = Phonebook.hpp Contact.hpp

all : $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean: 
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all