/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmalope <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 08:52:56 by pmalope           #+#    #+#             */
/*   Updated: 2019/06/13 10:56:14 by pmalope          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#define BUF 100
/*
void	ft_tolower_test(void)
{
	printf("ft_tolower -> %c\n", ft_tolower('A'));
}

void	ft_toupper_test(void)
{
	printf("ft_toupper -> %c\n", ft_toupper('a'));
}

void	ft_isprint_test(void)
{
	printf("ft_isprint -> %d\n", ft_isprint('%'));
}

void	ft_isascii_test(void)
{
	printf("ft_isascii -> %d\n", ft_isascii('@'));
}

void	ft_isalnum_test(void)
{
	printf("ft_isalnum -> %d\n", ft_isalnum('^'));
}

void	ft_isdigit_test(void)
{
	printf("ft_isdigit -> %d\n", ft_isdigit('1'));
}

void	ft_isalpha_test(void)
{
	printf("ft_isalpha -> %d\n", ft_isalpha('a'));
}
*/
void	ft_strlen_testing(void)
{
	printf("ft_strlen -> %zu\n", ft_strlen("Counting characters in a string!!!"));
}

void	ft_strdup_test(void)
{
	char	*ptr_newstr;

	ptr_newstr = ft_strdup("I love what I'm doing!!!");
	printf("ft_strdup -> %s\n", ptr_newstr);
}

void	ft_strcpy_test(void)
{
	char	dst[BUF];

	ft_strcpy(dst, "Learning C");
	printf("ft_strcpy -> %s\n", dst);
}

void	ft_strncpy_test(void)
{
	char	dst[BUF];

	ft_strncpy(dst, "It is quite fun...", 15);
	printf("ft_strncpy -> %s\n", dst);
}

void	ft_strcat_test(void)
{
	char	dst[BUF];
	char	*joined_str;

	ft_strcpy(dst, "My name ");
	joined_str = ft_strcat(dst, "is Martina!!!");
	printf("ft_strcat -> %s\n", joined_str);
}

void	ft_strncat_test(void)
{
	char	dst[BUF];
	char	*joined_str;
	
	ft_strcpy(dst, "My original name ");
	joined_str = ft_strncat(dst, "Phetho!!!!", 6);
	printf("ft_strncat -> %s\n", joined_str);
}

void	ft_strlcat_test(void)
{
	char	dst[BUF];
	size_t	joined_str_len;

	ft_strcpy(dst, "We counting characters");
	joined_str_len = ft_strlcat(dst, "using strlcat!!!", 13);
	printf("ft_strlcat -> %zu\n", joined_str_len);
}

void	ft_strchr_test(void)
{
	char	str[BUF];
	char	*ptr;

	ft_strcpy(str, "Searching for the first occurrence of a character in this string");
	ptr = ft_strchr(str, 'f');
	printf("ft_strchr -> %s\n", ptr);

}

void	ft_strrchr_test(void)
{
	char	str[BUF];
	char	*ptr;

	ft_strcpy(str, "Searching for the last occurrence of a character in this string");
	ptr = ft_strrchr(str, 'c');
	printf("ft_strrchr -> %s\n", ptr);
}

void	ft_strstr_test(void)
{
	char	string[BUF];
	char	*ptr;

	ft_strcpy(string, "I'm looking for a substring in this string!!!");
	ptr = ft_strstr(string, "looking");
	printf("ft_strstr -> %s\n", ptr);
}

void	ft_strnstr_test(void)
{
	char	string[BUF];
	char	*ptr;

	ft_strcpy(string, "Looking for a substring in this string where not more than size of characters are searched!!");
	ptr = ft_strnstr(string, "string", ft_strlen(string));
	printf("ft_strnstr -> %s\n", ptr);
}

void	ft_strcmp_test(void)
{
	printf("ft_strcmp -> %d\n", ft_strcmp("Martian", "MartiAn"));
}

void	ft_strncmp_test(void)
{
	printf("ft_strncmp -> %d\n", ft_strncmp("MartiAn", "Martian", 6));
}

void	ft_atoi_test(void)
{
	printf("ft_atoi -> %d\n\n", ft_atoi("-1431"));
}

void	ft_memset_test(void)
{
	char	str[BUF];

	ft_strcpy(str, "Martian");
	printf("ft_memset 'Before' -> %s\n", str);
	ft_memset(str, '0', 1);
	printf("ft_memset 'After' -> %s\n\n", str);
}

void	ft_bzero_test(void)
{
	char	str[BUF];

	ft_strcpy(str, "Martian");
	printf("ft_bzero 'Before' -> %s\n", str);
	ft_bzero(str, 2);
	printf("ft_bzero  'After' -> %s\n\n", str);
}

void	ft_memcpy_test(void)
{
	char	str[BUF];

	ft_memcpy(str, "Martian", 3);
	printf("ft_memcpy -> %s\n", str);
}

void	ft_memccpy_test(void)
{
	char	str[BUF];

	ft_memccpy(str, "Martian of course", 'z', 19);
	printf("ft_memccpy -> %s\n", str);

}

void	ft_memmove_test(void)
{
	char	str_move[BUF];

	memmove(str_move, "what is happening!!!", 20);
	printf("ft_memmove -> %s\n", str_move);

}

void	ft_memchr_test(void)
{
	char	str[BUF];
	char	*ptr;

	ft_strcpy(str, "Searching for a character in this string");
	ptr = ft_memchr(str, 'f', 20);
	printf("ft_memchr -> %s\n", ptr);
}

void	ft_memcmp_test(void)
{
	printf("ft_memcmp -> %d\n\n", ft_memcmp("Martian", "martian", 6));
}
/*
void	ft_memalloc_test(void)
{
	char	*newstr;

	newstr = ft_memalloc(1);
	ft_strcpy(newstr, "Allocating memory!!!!");
	printf("ft_memalloc -> %s\n", newstr);
}

void	ft_memdel_test(void)
{
	char	*delstr;

	delstr = ft_memalloc(10);
	ft_strcpy(delstr, "Deleting memory");
	printf("ft_memdel -> 'Before deleting memory' %s\n", delstr);
	ft_memdel((void *)&delstr);
	printf("ft_memdel -> 'After deleting memory' %s\n", delstr);
}

void	ft_strnew_test(void)
{
	char	*newstr;

	newstr = ft_strnew(1);
	ft_strcpy(newstr, "Creating a string with strnew function");
	printf("ft_strnew -> %s\n", newstr);
}

void	ft_strdel_test(void)
{
	char	*tmp;

	tmp = ft_memalloc(10);
	ft_strcpy(tmp, "Deleting a string");
	printf("ft_strdel -> 'Before deleting the string' %s\n", tmp);
	ft_strdel(&tmp);
	printf("ft_strdel -> 'After deleting the string' %s\n", tmp);
}

void	ft_strclr_test(void)
{
	char	*temp;

	temp = ft_strnew(10);
	ft_strcpy(temp, "Clearing the string");
	printf("ft_strclr -> 'Before clearing the string' %s\n", temp);
	ft_strclr((char *)&temp);
	printf("ft_strclr -> 'After clearing the string' %s\n", temp);
}

void	ft_strequ_test(void)
{
	printf("ft_strequ -> %d\n", ft_strequ("Martian", "MartiAn"));
}

void	ft_strnequ_test(void)
{
	printf("ft_strnequ -> %d\n", ft_strnequ("MacmIllian", "Macmillian", 4));
}

void	ft_strsub_test(void)
{
	char	*ptr_strsub;

	ptr_strsub = ft_strsub("Macmillian or Martian is awesome!!", 14, 34);
	printf("ft_strsub -> %s\n", ptr_strsub);
}

void	ft_strjoin_test(void)
{
	char	str_tojoin[BUF];
	char	str_joinwith[BUF];
	char	*ptr_strjoin;

	ft_strcpy(str_tojoin, "Programming is fun!!! ");
	ft_strcpy(str_joinwith, "Ask Martian");
	ptr_strjoin = ft_strjoin(str_tojoin, str_joinwith);
	printf("ft_strjoin -> %s\n", ptr_strjoin);
}

void	ft_strtrim_test(void)
{
	char	*ptr_strtrim;

	ptr_strtrim = ft_strtrim("    Martian is a God      ");
	printf("ft_strtrim -> %s\n", ptr_strtrim);
}

void	ft_strsplit_test(void)
{
	int		index;
	char	s1[BUF];
	char	**tab;

	index = 0;
	ft_strcpy(s1, "Martian*Macmillian*Malope*Phetho");
	tab = ft_strsplit(s1, '*');
	while (*(tab + index))
	{
		printf("ft_strsplit -> tab#[%d] -> %s\n", index, *(tab + index));
		index++;
	}
}

void	ft_lstnew_test(void)
{
	t_list	*list;
	char	content[BUF];

	ft_strcpy(content, "I'm starting to like the C langauage");
	list = ft_lstnew(content, ft_strlen(content));
	printf("ft_lstnew address -> %p\n", &list);
	printf("ft_lstnew content -> %s\n", list->content);
	printf("ft_lstnew content_size -> %zu\n", ft_strlen(list->content));
	free(list);
}

void	ft_lstdelone_test(void)
{
	t_list *node;
	t_list *node1;
	char	item1[BUF];
	char	item[BUF];

	ft_strcpy(item, "Hope this function is working");
	ft_strcpy(item1, "Deleting the link");
	node = ft_lstnew(item, ft_strlen(item));
	node1 = ft_lstnew(item1, ft_strlen(item1));
	node->next = node1;
	while (node)
	{
		printf("ft_lstdelone address -> %p\n", &node->next);
		printf("ft_lstdelone -> 'Before deleting' -> %s\n", node->content);
		node = node->next;
	}
	ft_lstdelone(&node, ft_lst_del);
//	printf("ft_lstdelone address -> %p\n", &node1);
//	printf("ft_lstdelone -> 'After deleting' -> %s\n", node1->content);
}

void	ft_lstdel_test(void)
{
	t_list	*node;
	char	content[BUF];

	ft_strcpy(content, "Linked list are fun!!!");
	node = ft_lstnew(content, ft_strlen(content));
	printf("ft_lstdel -> 'Before deleting' %s\n", node->content);
	ft_lstdel(&node, ft_lst_del);
	printf("ft_lstdel -> 'After deleting' %s\n", node->content);
}

void	ft_lstadd_test(void)
{
	int i;
	t_list	*node;
	t_list	*list;
	char	content[BUF];
	char	item[BUF];

	i = 1;
	ft_strcpy(content, "We adding a new element");
	ft_strcpy(item, "to the list");
	list = ft_lstnew(content, ft_strlen(content));
	node = ft_lstnew(item, ft_strlen(item));
	ft_lstadd(&list, node);
	while (list)
	{
		printf("ft_lstadd -> #%d %s\n", i, list->content);
		list = list->next;
		i++;
	}
}

void	ft_lstiter_test(void)
{
	t_list	*list;
	char	content[BUF];

	ft_strcpy(content, "Hoping");
	list = ft_lstnew(content, ft_strlen(content));
	ft_lstiter(list, ft_lst_add);
	printf("ft_lstiter -> %s\n", list->content);
}

void	ft_lstmap_test(void)
{
}
*/
int     main(void)
{
//	ft_tolower_test();
//	ft_toupper_test();
//	ft_isprint_test();
//	ft_isascii_test();
//	ft_isalnum_test();
//	ft_isdigit_test();
//	ft_isalpha_test();

	ft_strlen_testing();
	ft_strdup_test();
	ft_strcpy_test();
	ft_strncpy_test();
	ft_strcat_test();
	ft_strncat_test();
	ft_strlcat_test();
	ft_strchr_test();
	ft_strrchr_test();
	ft_strstr_test();
	ft_strnstr_test();
	ft_strcmp_test();
	ft_strncmp_test();
	ft_atoi_test();

	ft_memset_test();
	ft_bzero_test();
	ft_memcpy_test();
	ft_memccpy_test();
	ft_memmove_test();
	ft_memchr_test();
	ft_memcmp_test();

	ft_memalloc_test();
	ft_memdel_test();
	ft_strnew_test();
	ft_strdel_test();
	ft_strclr_test();

//	ft_strequ_test();
//	ft_strnequ_test();
//	ft_strsub_test();
//	ft_strjoin_test();
//	ft_strtrim_test();
//	ft_strsplit_test();
//	ft_lstnew_test();
//	ft_lstdelone_test();
//	ft_lstdel_test();
//	ft_lstadd_test();
//	ft_lstiter_test();
//	ft_lstmap_test();
	return (0);
}
