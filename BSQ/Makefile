# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ptheo <ptheo@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 05:41:35 by ptheo             #+#    #+#              #
#    Updated: 2024/02/28 15:14:40 by ptheo            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


INCLUDES	= include/bsq.h

FILES	= read_file.c ft_atoi.c grid.c algo.c split.c main.c error.c ft_putstr.c

SRCPATH	=	$(DIRPATH)src/

SRC	=	$(addprefix $(SRCPATH), $(FILES))

NAME	= bsq

OBJ	= $(SRC:.c=.o)

CFLAGS	= -Wall -Werror -Wextra -g

all : $(NAME)

$(NAME) : $(OBJ) $(INCLUDES)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm $(OBJ)

fclean:
	rm $(NAME) $(OBJ)

re: fclean all

.PHONY: clean fclean re all

