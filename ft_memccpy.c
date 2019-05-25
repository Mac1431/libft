/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 08:48:37 by pmalope           #+#    #+#             */
/*   Updated: 2019/05/25 11:53:47 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    char        *ptr_d;
    const char  *ptr_s;

    ptr_d = dst;
    ptr_s = src;
    while (n > 0 || *ptr_s == (unsigned char )c)
    {
        *ptr_d = *ptr_s;
        ptr_d++;
        ptr_s++;
        n--;
    }
    return (dst);
}
