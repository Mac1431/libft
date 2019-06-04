/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:03:17 by pmalope           #+#    #+#             */
/*   Updated: 2019/06/04 16:44:27 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_int_len(int n)
{
	int	len;
	
	len = 0;
	while (n /= 10)
		len++;
	return (n);
}

char    *ft_itoa(int n)
{
	int	sign;
	int	i;
	char *ptr;

	i = 0;
	sign = (n < 0) ? -1 : 1;
	n *= sign;
	if (n < 0 && (ptr = (char *)malloc(sizeof(char) * 12)))
		return (ft_strcpy(ptr, "-2147483648"));
	ptr = NULL;
	if ((ptr = (char *)malloc(sizeof(char) + ft_int_len(n))))
	{
		if (sign == -1)
			ptr[i++] = '-';
		while (n >= 0)
		{
			ptr[i++] = '0' + n % 10;
			n /= 10;
			n = (n == 0) ? -1 : n;
		}
		ptr[i] = '\0';
		ft_reverse_str(ptr);
	}
	return (ptr);
}
