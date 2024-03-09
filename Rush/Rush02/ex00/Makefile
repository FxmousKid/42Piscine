# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: okapshai <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/25 18:26:01 by okapshai          #+#    #+#              #
#    Updated: 2024/02/25 23:22:39 by okapshai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INCLUDES	= include/funcs.h

FILES	=  main.c AlgoFuncs.c ft_itoa.c parser_funcs.c print_2_digits.c \
	  	   print_digits.c print_funcs.c print_hundreds.c usefullfuncs_2.c \
	  	   usefullfuncs.c

SRCPATH = 	$(DIRPATH)src/

SRC =	$(addprefix $(SRCPATH), $(FILES))

NAME	= rush-02

OBJ = $(SRC:.c=.o)

CC =  cc

CFLAGS =  -Wall -Wextra -Werror -g

all : $(NAME)

$(NAME) : $(OBJ) $(INCLUDE)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean :
	rm $(OBJ)
fclean :
	rm $(NAME) $(OBJ)

re : fclean all

.PHONY: clean fclean re all
