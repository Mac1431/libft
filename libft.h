/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:47:26 by pmalope           #+#    #+#             */
/*   Updated: 2019/05/22 14:57:06 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H
#include <string.h>
#include <stdlib.h>

int     ft_tolower(int c);
int     ft_toupper(int c);
int     ft_isprint(int c);
int     ft_isascii(int c);
int     ft_isalnum(int c);
int     ft_isdigit(int c);
int     ft_isalpha(int c);

size_t  ft_strlen(const char *s);
char    *ft_strdup(const char *s1);
char    *ft_strcpy(char *dst, const char *src);
char    *ft_strncpy(char *dst, const char *src, size_t len);
#endif
