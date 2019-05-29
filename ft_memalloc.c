/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 07:03:52 by pmalope           #+#    #+#             */
/*   Updated: 2019/05/29 08:09:57 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memalloc(size_t size)
{
    void    *memory;

    memory = malloc(size);
    if (!memory)
        return (NULL);
    ft_memset(memory, 0, size);
    return (memory);
}
