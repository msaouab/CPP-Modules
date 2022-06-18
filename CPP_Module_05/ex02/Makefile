# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 10:28:16 by msaouab           #+#    #+#              #
#    Updated: 2022/06/18 14:03:31 by msaouab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Form

SRC =	main.cpp\
		Bureaucrat.cpp\
		Form.cpp\
		PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp\
		ShrubberyCreationForm.cpp\

INCLUDE =	Bureaucrat.hpp\
			Form.hpp\
			RobotomyRequestForm.hpp\
			ShrubberyCreationForm.hpp\
			PresidentialPardonForm.hpp\

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