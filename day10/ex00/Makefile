# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hpowlows <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/01 16:06:15 by hpowlows          #+#    #+#              #
#    Updated: 2018/10/01 16:17:09 by hpowlows         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs
INC = includes

all:
	gcc -Wall -Wextra -Werror -c $(SRC)/ft_putchar.c \
		$(SRC)/ft_putstr.c \
		$(SRC)/ft_strcmp.c \
		$(SRC)/ft_strlen.c \
		$(SRC)/ft_swap.c \
		-I $(INC)/*.h
	ar rcs $(NAME) ft_*.o
	ranlib $(NAME)

clean:
	rm -f ft_putchar.o \
		ft_putstr.o \
		ft_strcmp.o \
		ft_strlen.o \
		ft_swap.o

fclean: clean
	rm -f $(NAME)

re: fclean all
