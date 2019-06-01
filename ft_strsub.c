/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:19:30 by pmalope           #+#    #+#             */
/*   Updated: 2019/06/01 13:35:24 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strsub(char const  *s, unsigned int start, size_t len)
{
	int index;
	char *str;

	index = 0;
	str = ft_strnew(len + 1);
	len = len + start;
	if (!str)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (s[start] != '\0' && start < len)
		{
			str[index] = s[start];
			start++;
			index++;
		}
	}
	str[index] = '\0';
	return (str);
}
