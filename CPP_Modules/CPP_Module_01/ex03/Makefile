# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 10:28:16 by msaouab           #+#    #+#              #
#    Updated: 2022/05/11 14:14:26 by msaouab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Unnecessary_Violence

SRC =	main.cpp\
		Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp\

INCLUDE =	Weapon.hpp\
			HumanA.hpp\
			HumanB.hpp\

OBJ = $(SRC:.cpp=.o)

CC = clang++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

bold = $(shell tput bold)

magenta = `tput setaf 5`

ED = \033[0m

all : $(NAME)

$(NAME): $(OBJ)
		@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
		@echo "$(bold)$(magenta)Combilation Done.$(ED)"

clean: 
		@rm -f $(OBJ)
		@echo "clean Done."

fclean: clean
		@rm -f $(NAME)
		@echo "fclean Done."

re: fclean all