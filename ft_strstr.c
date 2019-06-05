/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 16:33:00 by pmalope           #+#    #+#             */
/*   Updated: 2019/06/05 16:35:22 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strstr(const char *haystack, const char *needle)
{
    int i;
    int j;
	char	*tmp_stack;
	char	*tmp_needle;

	tmp_stack = (char *)haystack;
	tmp_needle= (char *)needle;
	if (!(tmp_needle))
		return (tmp_stack);
	i = 0;
	while (tmp_stack[i] != '\0')
	{
		j = 0;
		while (tmp_stack[i + j] == tmp_needle[j])
		{
			if (tmp_needle[j + 1] == '\0')
				return (&tmp_stack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
