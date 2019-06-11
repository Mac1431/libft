#include "libft.h"

void    ft_putnbr(int n)
{
	if (n < 0 && n * (-1) != n)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}
