# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 10:28:16 by msaouab           #+#    #+#              #
#    Updated: 2022/05/08 17:15:45 by msaouab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Account

SRC = tests.cpp\
	Account.cpp\

OBJ = $(SRC:.cpp=.o)

CC = clang++ -std=c++98

CFLAGS = -Wall -Wextra -Werror

INCLUDE = Account.hpp

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
