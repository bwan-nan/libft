#include "libft.h"

char    *ft_strcat(char *dest, const char *src)
{
    int i;
    int k;
    
    k = 0;
    i = ft_strlen(dest);
    while (src[k])
    {
        dest[i+k] = src[k];
        k++;
    }
    dest[i+k] = '\0';
    return (dest);
}
