# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maddi <maddi@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/16 03:03:23 by maddi             #+#    #+#              #
#    Updated: 2021/12/16 08:31:14 by maddi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -c -Wall -Wextra -Werror


#FLAGS de linkage 
LDFLAGS = 

CC = gcc

SRCS = convert_utils.c \
	convert_utils2.c \
	ft_printf.c \
	ft_putaddr_hex.c \
	ft_putchar.c \
	ft_putnbr.c \
	ft_putstr.c \
	ft_putunbr.c \
	ft_putunbr_hex.c \
	ft_strlen.c

OBJ = $(SRCS:.c=.o)



$(NAME): $(OBJ)
	ar -rcs $@ $^

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS)  $< -o $@

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re