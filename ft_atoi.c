#include "libft.h"

int     ft_atoi(const char *nptr)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (nptr[i] < 33)
        i++;
    while (nptr[i] == '-' || nptr[i] == '+')
    {
        if (nptr[i + 1] == '-' || nptr[i] == '+')
            return (0);
        if (nptr[i] == '-')
            sign *= -1;
        i++;
    }
    while (nptr[i] >= 48 && nptr[i] <= 57)
        result = result * 10 + nptr[i++] - 48;
    return (result);
}
