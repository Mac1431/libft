/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 09:31:42 by pmalope           #+#    #+#             */
/*   Updated: 2019/05/25 11:08:50 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    int             i;
    unsigned char   *temp;

    temp = (unsigned char*)s;
    i = 0;
    while (n > 0)
    {
        if (temp[i] != c)
            i++;
        else
            return (temp);
        n--;
    }
    return (0);
}
