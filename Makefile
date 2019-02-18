# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bwan-nan <bwan-nan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 17:52:27 by bwan-nan          #+#    #+#              #
#    Updated: 2019/02/18 20:35:40 by bwan-nan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = Clang
CFLAGS = -Wall -Werror -Wextra
IFLAGS = -I $(IPATH)
COMPILE = $(CC) -c
MKDIR = mkdir -p
CLEANUP = /bin/rm -rf

# Regular Colors
CYAN =\033[0;36m
BLUE=\033[0;34m
GREEN=\033[32m
RED=\033[0;31m
WHITE=\033[0;37m
PURPLE=\033[0;35m
YELLOW=\033[0;33m

NC=\033[0m

vpath %.c src/
vpath %.h inc/

SRC += ft_atoi.c
SRC += ft_bzero.c
SRC += ft_isalnum.c
SRC += ft_isalpha.c
SRC += ft_isascii.c
SRC += ft_isdigit.c
SRC += ft_islower.c
SRC += ft_isprint.c
SRC += ft_isupper.c
SRC += ft_iswhitespace.c
SRC += ft_itoa.c
SRC += ft_lstadd.c
SRC += ft_lstclr.c
SRC += ft_lstdel.c
SRC += ft_lstdelone.c
SRC += ft_lstiter.c
SRC += ft_memalloc.c
SRC += ft_memccpy.c
SRC += ft_memchr.c
SRC += ft_memcmp.c
SRC += ft_memcpy.c
SRC += ft_memdel.c
SRC += ft_memmove.c
SRC += ft_memset.c
SRC += ft_power.c
SRC += ft_putchar.c
SRC += ft_putchar_fd.c
SRC += ft_putendl.c
SRC += ft_putendl_fd.c
SRC += ft_putnbr.c
SRC += ft_putnbr_fd.c
SRC += ft_putstr.c
SRC += ft_putstr_fd.c
SRC += ft_show_tab.c
SRC += ft_strcat.c
SRC += ft_strchr.c
SRC += ft_strclr.c
SRC += ft_strcmp.c
SRC += ft_strcpy.c
SRC += ft_strdel.c
SRC += ft_strdup.c
SRC += ft_strequ.c
SRC += ft_striter.c
SRC += ft_striteri.c
SRC += ft_strjoin.c
SRC += ft_strlcat.c
SRC += ft_strlen.c
SRC += ft_strmap.c
SRC += ft_strmapi.c
SRC += ft_strncat.c
SRC += ft_strncmp.c
SRC += ft_strncpy.c
SRC += ft_strnequ.c
SRC += ft_strnew.c
SRC += ft_strnstr.c
SRC += ft_strrchr.c
SRC += ft_strsplit.c
SRC += ft_strstr.c
SRC += ft_strsub.c
SRC += ft_strtrim.c
SRC += ft_tolower.c
SRC += ft_toupper.c
SRC += ft_realloc.c
SRC += ft_putnbrendl.c
SRC += get_next_line.c
SRC += ft_itoa_base.c
SRC += ft_lst_mergesort.c
SRC += ft_lst_bubblesort.c
SRC += sort_int_tab.c
SRC += ft_lstrev.c


INC = libft.h
IPATH = inc/
OPATH = obj/

OBJS = $(patsubst %.c, $(OPATH)%.o, $(SRC))

all: $(OPATH) $(NAME)

$(NAME): $(OBJS)
	ar -rusc $@ $^
	ranlib $@
	printf "$(GREEN)$@ is ready.\n$(NC)"

$(OBJS): $(OPATH)%.o : %.c $(INC)
	$(COMPILE) $(CFLAGS) $(IFLAGS) $< -o $@
	printf "$(YELLOW)Compiling $<\n$(NC)"

$(OPATH):
	$(MKDIR) $@

clean:
	$(CLEANUP) $(OBJS)
	$(CLEANUP) $(OPATH)
	printf "$(RED)All objects removed\n$(NC)"

fclean: clean
	$(CLEANUP) $(NAME)
	printf "$(RED)$(NAME) deleted\n$(NC)"

re: fclean all

.SILENT:
