/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 08:47:54 by pmalope           #+#    #+#             */
/*   Updated: 2019/05/30 15:41:40 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (!needle)
        return ((char *)haystack);
    while (haystack[i] != '\0')
    {
        j = 0;
        while (i + j < len && haystack[i + j] == needle[j])
            j++;
        if (!(needle[j] != '\0'))
            return ((char *)haystack + i);
        i++;
    }
    return (NULL);
}
