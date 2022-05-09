# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 10:28:16 by msaouab           #+#    #+#              #
#    Updated: 2022/05/09 14:18:42 by msaouab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar_brainz

SRC =	main.cpp\
		Zombie.cpp\
		zombieHorde.cpp\

INCLUDE = Zombie.hpp

OBJ = $(SRC:.cpp=.o)

CC = clang++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

bold = $(shell tput bold)

magenta = `tput setaf 5`

ED = \033[0m

all : $(NAME) clean

$(NAME): $(OBJ) $(INCLUDE)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "$(bold)$(magenta)Combilation Done.$(ED)"

clean: 
		@rm -f $(OBJ)
		@echo "clean Done."

fclean: 
		@rm -f $(NAME)
		@echo "fclean Done."

re: fclean all