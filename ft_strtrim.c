/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:40:06 by pmalope           #+#    #+#             */
/*   Updated: 2019/06/01 13:55:08 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s)
{
	size_t	len;
	size_t	start;
	size_t	end;

	start = 0;
	end = 0;
	if (s)
		len = ft_strlen(s);
	while ((s && *(s + start) && *(s + start) == ' ') || (*(s + start) == '\n' \
			|| *(s + start) == '\t'))
		start++;
	while ((s && end < len && *(s + len - 1 - end) == ' ') || (*(s + len - 1 - end) =='\n' \
			|| *(s + len - 1 - end) == '\t'))
		end++;
	if ((int)(len - end - start) < 0)
		return (ft_strsub(s, start, 0));
	return (ft_strsub(s, start, len - end - start));
}
