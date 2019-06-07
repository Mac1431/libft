/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:10:09 by pmalope           #+#    #+#             */
/*   Updated: 2019/06/07 15:50:18 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1)
		return (0);
	else if (ft_strncmp(s1, s2, n) != '\0')
		return (0);
	else
		return (1);
}
