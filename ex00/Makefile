# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: svoort <marvin@codam.nl>                     +#+                      #
#                                                    +#+                       #
#    Created: 2018/10/08 11:30:45 by svoort        #+#    #+#                  #
#    Updated: 2018/10/14 22:34:46 by fmiceli       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = colle-2
_SRCS = main.c parse_input.c check_rushes.c cross_check.c get_height.c \
	get_width.c read_input.c rush00.c rush01.c \
	rush02.c rush03.c rush04.c ft_putchar.c ft_realloc.c ft_putstr.c \
	cross_check_shapes.c rectangle.c square.c ft_putnbr.c
SRC = $(patsubst %, srcs/%, $(_SRCS))
_INCLUDES = colle_2.h
INCL = ./incl/
VPATH = ./incl/ ./src/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -I $(INCL) -o $(NAME) $(SRC)

clean:
	/bin/rm -f *.o
	rm -f -r ./*~

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
