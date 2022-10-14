# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 15:13:44 by euyi              #+#    #+#              #
#    Updated: 2022/10/11 17:04:15 by euyi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	harl

SRC		=	main.cpp	Harl.cpp

OBJ		=	$(subst .cpp,.o,$(SRC))

LANG	=	c++

FLAG	=	-Wall	-Wextra	-Werror	-std=c++98

all:		$(NAME)

$(NAME):	$(OBJ)
			$(LANG)	$(FLAG)	$(OBJ)	-o	$(NAME)

clean:
			/bin/rm	-f	$(OBJ)

fclean:		clean
			/bin/rm	-f	$(NAME)

re:			fclean	all

.PHONY:		all	clean	fclean	re
