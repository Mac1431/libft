#include "libft.h"

void    ft_putnbr(int n)
{
    int temp;
    int res;

    temp = 0;
    res = 0;
    if (n < 0)
    {
        n *= -1;
        write(1, "-", 1);
    }
    if (n >= 10)
    {
        temp = n / 10;
        ft_putnbr(temp);
    }
    res = n % 10 + 48;
    write (1, &res, 1);
}