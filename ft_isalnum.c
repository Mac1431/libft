/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 13:34:05 by pmalope           #+#    #+#             */
/*   Updated: 2019/05/22 13:40:48 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_isalnum(int c)
{
    unsigned char res;

    res = (unsigned char )c;
    if (ft_isalpha(res) || ft_isdigit(res))
        return (1);
    return (0);
}
