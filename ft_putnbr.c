#include "libft.h"

void    ft_putnbr(int nb)
{
    long int n;

    n = nb;
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putchar((n % 10) + 48);
    }
    if (n <= 9)
        ft_putchar(n + 48);
}
