# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahhammou <ahhammou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 08:21:23 by ahhammou          #+#    #+#              #
#    Updated: 2021/10/26 18:19:10 by ahhammou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

NAME = libftprintf.a

SOURCES = 	ft_putchar.c ft_putnbr.c ft_putstr.c ft_printf.c ft_strlen.c ft_putnbr_unsigned.c ft_isalpha.c
#BONUS =		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c


OBJECTS = $(SOURCES:.c=.o)
OBJECTSB = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar cr $(NAME) $(OBJECTS)
	
$(OBJECTS): $(SOURCES)
	gcc -c $(CFLAGS) $^ -I.
#$(OBJECTSB): $(BONUS)
#	gcc -c $(CFLAGS) $^ -I.

#bonus: $(NAME) $(OBJECTS) $(OBJECTSB)
#	ar cr $(NAME) $(OBJECTSB) $(OBJECTS)

clean:
	rm -f $(OBJECTS)
# $(OBJECTSB)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus 
