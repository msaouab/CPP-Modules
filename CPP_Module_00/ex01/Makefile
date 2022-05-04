# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 10:28:16 by msaouab           #+#    #+#              #
#    Updated: 2022/05/04 18:54:25 by msaouab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AWESOME_PHONEBOOK

SRC =	main.cpp Utils.cpp Contact.cpp

OBJ = $(SRC:%.cpp=%.o)

CC = clang++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

INCLUDE = phonebook.hpp Contact.hpp

all : $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean: 
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all