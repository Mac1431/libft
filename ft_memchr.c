/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 09:31:42 by pmalope           #+#    #+#             */
/*   Updated: 2019/05/28 08:12:50 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *temp;

    temp = (unsigned char*)s;
    while (n > 0)
    {
        if (*temp != (unsigned char)c)
            temp++;
        else
            return (temp);
        n--;
    }
    return (NULL);
}
