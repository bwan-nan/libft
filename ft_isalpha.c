int ft_islpha(int c)
{
    if (c >= 65 && c <= 90 || c >= 97 && c <= 122 || c >= 48 && c <= 57)
        return (1);
    else
        return (0);
}