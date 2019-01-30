# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 17:52:27 by bwan-nan          #+#    #+#              #
#    Updated: 2019/01/30 11:38:09 by bwan-nan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	ft_isdigit.c ft_islower.c ft_isprint.c ft_isupper.c ft_iswhitespace.c \
	ft_itoa.c ft_lstadd.c ft_lstclr.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c \
	ft_memalloc.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
	ft_memdel.c ft_memmove.c ft_memset.c ft_power.c ft_putchar.c ft_putchar_fd.c \
	ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
	ft_show_tab.c ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c \
	ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c \
	ft_strmap.c ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c \
	ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c ft_tolower.c \
	ft_toupper.c ft_realloc.c ft_putnbrendl.c get_next_line.c ft_itoa_base.c \
	ft_lst_mergesort.c ft_lst_bubblesort.c sort_int_tab.c

SRC = $(addprefix ./src/, $(FILES))

HEADERS = -I inc

all: $(NAME)

$(NAME):
	@clang -Wall -Werror -Wextra $(HEADERS) -c $(SRC)
	@ar rc $(NAME) *.o
	@ranlib $(NAME)
	@echo "\033[1;34mLibft\t\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

clean:
	@/bin/rm -f *.o
	@echo "\033[1;34mLibft\t\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"


fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[1;34mLibft\t\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"


re: fclean all
