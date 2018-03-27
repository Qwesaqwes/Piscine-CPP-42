# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/26 15:48:07 by jichen-m          #+#    #+#              #
#    Updated: 2018/03/27 14:52:32 by jichen-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CC = clang++

SRC = ./main.cpp\
		./contact.class.cpp

FLAGS = -Wall -Wextra -Werror

SRC1 = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) :
		@$(CC) $(FLAGS) -c $(SRC)
		@$(CC) -o $(NAME) $(SRC1)

clean:
		@rm -rf $(SRC1)
		@echo "objects files have been removed !"

fclean: clean
		@rm -rf $(NAME)
		@echo "$(NAME) has been removed !"

re: fclean all

.PHONY	:		all clean re
