/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:43:04 by pmalope           #+#    #+#             */
/*   Updated: 2019/05/24 16:14:24 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    int     j;

    i = 0;
    j = 0;
    while (dst[i] != '\0')
        i++;
    while (src[j] != '\0')
    {
        if (i < dstsize - 1)
            dst[i] = src[j];
        j++;
        i++;
    }
    dst[i] = '\0';
    return (i);
}
