# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: euyi <euyi@student.42wolfsburg.de>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 17:42:55 by euyi              #+#    #+#              #
#    Updated: 2022/10/04 19:20:20 by euyi             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	brainz

SRC		=	main.cpp	newZombie.cpp	Zombie.cpp	randomChump.cpp

OBJ		=	$(subst .cpp,.o,$(SRC))

LANG	=	c++

FLAG	=	-Wall -Werror -Wextra	-std=c++98

all:		$(NAME)

$(NAME):	$(OBJ)
			$(LANG)	$(FLAG) $(OBJ)	-o $(NAME)

clean:		
				/bin/rm -f $(OBJ)
				
fclean:			clean
				/bin/rm -f $(NAME)

re:				fclean	all

.PHONY:			all	clean	fclean	re
