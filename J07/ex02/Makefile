# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jichen-m <jichen-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/03 15:58:28 by jichen-m          #+#    #+#              #
#    Updated: 2018/04/05 14:56:26 by jichen-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array

CC = clang++

SRC = ./*.cpp

FLAGS = -Wall -Wextra -Werror

SRC1 = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) :
		@$(CC) $(FLAGS) -c $(SRC)
		@$(CC) -o $(NAME) $(SRC1)

clean:
		@rm -rf $(SRC1)
		@echo "objects files have been removed ! ✓"

fclean: clean
		@rm -rf $(NAME)
		@echo "$(NAME) has been removed ! ✓"

re: fclean all

.PHONY	:		all clean re
