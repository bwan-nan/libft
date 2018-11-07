# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwan-nan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 12:54:30 by bwan-nan          #+#    #+#              #
#    Updated: 2018/11/07 12:57:01 by bwan-nan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./*.c

HEADER = ./libft.h

all: $(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) *.o
	/bin/rm -f *.o

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
