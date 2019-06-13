/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:23:53 by pmalope           #+#    #+#             */
/*   Updated: 2019/06/13 13:39:02 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		index;
	int		len;
	char	*str;

	index = 0;
	if (!s1)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) + len);
	if (!str)
		return (NULL);
	while (*s1 && index < len)
	{
		str[index] = *s1;
		s1++;
		index++;
	}
	while (*s2 && index < len)
	{
		str[index] = *s2;
		s2++;
		index++;
	}
	str[index] = '\0';
	return (str);
}
