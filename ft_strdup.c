#include "libft.h"

char    *ft_strdup(char *src)
{
    char *dest;

    if (!(dest = (char *)malloc(sizeof(*dest) * (ft_strlen(src) + 1))))
        return (0);
    return (ft_strcpy(dest, src));
}

int main(int ac, char **av)
{
    if (ac == 2)
        ft_putstr(ft_strdup(av[1]));
    ft_putchar('\n');
    return (0);
}
