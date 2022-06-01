# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 10:28:16 by msaouab           #+#    #+#              #
#    Updated: 2022/06/01 18:53:22 by msaouab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Brain

SRC =	main.cpp\
		Animal.cpp\
		Dog.cpp\
		Cat.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp\
		Brain.cpp\

INCLUDE =	Animal.hpp\
			Cat.hpp\
			Dog.hpp\
			WrongAnimal.hpp\
			WrongCat.hpp\
			Brain.hpp\

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