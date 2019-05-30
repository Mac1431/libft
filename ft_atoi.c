/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:29:20 by pmalope           #+#    #+#             */
/*   Updated: 2019/05/30 15:29:24 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_atoi(const char *str)
{
    int sign;
    int tmp;

    sign = 1;
    tmp = 0;
    while (*str == '\t' || *str == '\v' || *str == '\n' || *str == '\r'
            || *str == '\f' || *str == ' ')
        str++;
    if (*str == '-')
    {
        sign = -1;
        str++;
    }
    if (*str == '+')
        str++;
    while (*str && ft_isdigit(*str))
    {
        tmp = tmp * 10 + *str - '0';
        str++;
    }
    return (tmp * sign);
}
