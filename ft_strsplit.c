/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:57:42 by pmalope           #+#    #+#             */
/*   Updated: 2019/06/10 08:10:54 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_nbwords(char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s && *(s + i))
	{
		while (*(s + i) == c)
			i++;
		if (*(s + i))
			words++;
		while (*(s + i) != c)
			i++;
	}
	return (words);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	size_t	start;
	size_t	end;
	char	**tab;

	i = 0;
	start = 0;
	end = 0;
	tab = NULL;
	if (!s)
		return (tab);
	tab = (char **)malloc(sizeof(char) * (ft_nbwords((char *)s, c) + 1));
//	if (!tab)
//		return (NULL);
	while (ft_nbwords((char *)s, c) - 1)
	{
		while (s && *(s + start) && *(s + start) == c)
			start++;
		while (s && *(s + start + end) && *(s + start + end) != c)
			end++;
		tab[i] = ft_strsub(s, start, end);
		start += end;
		end = 0;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
