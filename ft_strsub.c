/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:19:30 by pmalope           #+#    #+#             */
/*   Updated: 2019/06/11 07:41:47 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strsub(char const  *s, unsigned int start, size_t len)
{
	int index;
	char *str;

	if (s == NULL)
		return (NULL);
	index = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (s[start] != '\0' && len)
	{
		str[index] = s[start];
		index++;
		start++;
		len--;
	}
	return (str);
}
