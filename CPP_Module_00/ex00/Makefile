# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msaouab <msaouab@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 10:28:16 by msaouab           #+#    #+#              #
#    Updated: 2022/05/03 11:18:35 by msaouab          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp\

OBJ = $(SRC:.c=.o)

CC = g++

VRS = -std=c++98

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJ)
		$(CC) $(CFLAGS) $(VRS) $(OBJ) -o $(NAME)

clean: 
		rm -f $(NAME)

fclean: clean
		rm -f $(NAME)

re: fclean all