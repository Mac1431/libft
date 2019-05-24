/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:29:58 by pmalope           #+#    #+#             */
/*   Updated: 2019/05/24 15:36:48 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    char    c2;
    char    *str;

    str = (char *)s;
    c2 = (char)c;
    while (*str != '\0')
    {
        if (*str == c2)
            return (str);
        str++;
    }
    return (NULL);
}
