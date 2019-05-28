#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    int temp;

    temp = n;
    if (temp < 0)
    {
        ft_putchar('-');
        temp = temp * -1;
    }
    if (temp >= 10)
    {
        temp = temp / 10;
        ft_putnbr(temp);
    }
    ft_putchar_fd(temp % 10 + '0', fd);
}