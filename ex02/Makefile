# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/06 14:47:14 by euyi              #+#    #+#              #
#    Updated: 2022/10/06 16:11:58 by euyi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	brain

SRC			=	main.cpp

OBJ			=	$(subst .cpp,.o,$(SRC))

LANG		=	c++

FLAG		=	-Wall	-Wextra	-Werror	-std=c++98

all:			$(NAME)

$(NAME):		$(OBJ)
				$(LANG)	$(FLAG)	$(OBJ) -o $(NAME)

clean:			
				/bin/rm -f $(OBJ)

fclean:			clean
				/bin/rm -f $(NAME)

re:				fclean all

.PHONY:			all	clean	fclean	re