# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/07 13:59:07 by euyi              #+#    #+#              #
#    Updated: 2022/10/07 16:45:27 by euyi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	uv

SRC		=	main.cpp	Weapon.cpp	HumanA.cpp	HumanB.cpp 

OBJ		=	$(subst .cpp,.o,$(SRC))

LANG	=	c++

FLAGS	=	-Wall	-Wextra	-Werror	-std=c++98

all:		$(NAME)

$(NAME):	$(OBJ)
			$(LANG)	$(FLAGS)	$(OBJ) -o $(NAME)

clean:		
			/bin/rm -f $(OBJ)

fclean:		clean
			/bin/rm -f $(NAME)

re:			fclean	all

.PHONY:		all	clean	fclean	re
