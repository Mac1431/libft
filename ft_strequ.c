/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/01 13:09:05 by pmalope           #+#    #+#             */
/*   Updated: 2019/06/01 13:19:10 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strequ(char const *s1, char const *s2)
{
	if (ft_strcmp(s1, s2) != '\0')
		return (0);
	else
		return (1);
}
