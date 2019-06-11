/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 15:49:45 by pmalope           #+#    #+#             */
/*   Updated: 2019/06/07 15:41:26 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t  i;
    char    *str;

    i = 0;
	if (!s)
		return (NULL);
    str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
    if (!str)
        return (NULL);
    if (s && f)
    {
        while (i < ft_strlen(s))
        {
            str[i] = f(i, s[i]);
            i++;
        }
        str[i] = '\0';
    }
    return (str);
}