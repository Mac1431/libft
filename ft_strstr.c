/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:33:00 by pmalope           #+#    #+#             */
/*   Updated: 2019/05/24 17:59:00 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strstr(const char *haystack, const char *needle)
{
    int i;
    int j;
    int len;

    i = 0;
    j = 0;
    len = ft_strlen(needle);
    if (len == 0)
        return ((char *)haystack);
    while (haystack[i] != '\0')
    {
        while (needle[j] == haystack[i + j])
        {
            if (j == (len - 1))
                return ((char *)haystack + i);
            j++;
        }
        i++;
    }
    return (0);
}