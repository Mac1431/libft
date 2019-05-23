/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:18:52 by pmalope           #+#    #+#             */
/*   Updated: 2019/05/23 09:23:50 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    int i;
    char *new_str;

    i = 0;
    new_str = (char *)malloc(sizeof(char));
    if (*new_str)
        return (NULL);
    while (s1[i] != '\0')
    {
        new_str[i] = s1[i];
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}
