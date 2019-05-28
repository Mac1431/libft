/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 14:18:52 by pmalope           #+#    #+#             */
/*   Updated: 2019/05/28 08:13:18 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    int i;
    char *temp;

    i = 0;
    temp = (char *)malloc(sizeof(char));
    if (*temp)
        return (NULL);
    while (s1[i] != '\0')
    {
        temp[i] = s1[i];
        i++;
    }
    temp[i] = '\0';
    return (temp);
}
