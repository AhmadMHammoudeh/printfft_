# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 08:21:23 by ahhammou          #+#    #+#              #
#    Updated: 2021/10/30 12:09:58 by ahhammou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

NAME = libftprintf.a

SOURCES = 	ft_putchar.c ft_putnbr.c ft_putstr.c ft_printf.c ft_strlen.c ft_putnbr_unsigned.c ft_isalpha.c\
			ft_putnbr_hex.c ft_helper_sc.c

OBJECTS = $(SOURCES:.c=.o)
OBJECTSB = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar cr $(NAME) $(OBJECTS)
	
$(OBJECTS): $(SOURCES)
	gcc -c $(CFLAGS) $^ -I.

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re  
