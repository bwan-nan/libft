#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>

void    ft_putchar(char c);
void    ft_putstr(char *str);
int     ft_strlen(char *str);
void    ft_putnbr(int nb);
char    *ft_strcpy(char *dest, char *src);
char    *ft_strncpy(char *dest, const char *src, size_t n);
int     ft_strcmp(const char *s1, const char *s2);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strstr(char *haystack, const char *needle);
int     ft_atoi(const char *nptr);
char    *ft_strcat(char *dest, const char *src);
char    *ft_strncat(char *dest, const char *src, size_t n);


#endif
