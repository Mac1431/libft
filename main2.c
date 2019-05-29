#include <stdio.h>
#include "libft.h"

int     main(void)
{
    int size;
    size = 10;
    char from[size];
    char to[size];
    char buf[] = "oLearning how to code";
	char buffer[5];
	char string[] = "Marti";
	char s1[10];
	char s2[] = "Phetho";
    char str1[100];
    char str2[] = "Martian is so fucking kool";
	int	i;
	char *ptr_memcpy;
    char *ptr_memccpy;
    char *ptr_memchr;

	i = 0;
/*    char    strcpy_dest[10];
    char    str_cat[100] = "Macmillian ";
    char    str_ncat[100] = "Malope ";
    char    str_lcat[100] = "Mac ";
    char    str_chr[100] = "I feel sick today!!";
    char    str_rchr[100] = "I'm not feeling eh okay";
    char    str_str[100] = "Nothing foo boo is awesome";
    char    str_strr[100] = "boo";
	char	str_nstr[100] = "learning how to code!!!";
	char	str_nstrr[] = "how";
    char    join_cat[] = "is awesome being";
    char    join_ncat[] = "Phetho is awesome being";
    char    *ptr_strcpy;
    char    *ptr_cat;
    char    *ptr_ncat;
    size_t   ptr_lcat;
    char    *to_find;
    char    *to_findr;
    char    *ptr_strstr;
	char	*ptr_strnstr;
	int		n;

	n = 0;
    printf("ft_toupper -> %c\n", ft_toupper('b'));
    printf("ft_tolower -> %c\n", ft_tolower('B'));
    printf("ft_isprint -> %d\n", ft_isprint(' '));
    printf("ft_isascii -> %d\n", ft_isascii(','));
    printf("ft_isalnum -> %d\n", ft_isalnum(' '));
    printf("ft_isdigit -> %d\n", ft_isdigit('a'));
    printf("ft_isalpha -> %d\n", ft_isalpha('1')); 

    printf("ft_strlen -> %zu\n", ft_strlen("Martian is awesome!!!"));
    printf("ft_strdup -> %s\n", ft_strdup("Macmillian"));
    printf("ft_strcpy -> %s\n", ft_strcpy(strcpy_dest, "Martian"));
    ptr_strcpy = ft_strncpy(strcpy_dest, "Martian", 3);
    printf("ft_strncpy -> %s\n", ptr_strcpy);
    ptr_cat = ft_strcat(str_cat, join_cat);
    printf("ft_strcat -> %s\n", ptr_cat);
    ptr_ncat = ft_strncat(str_ncat, join_ncat, 23);
    printf("ft_strncat -> %s\n", ptr_ncat);
    ptr_lcat = ft_strlcat(str_lcat, "m", 20);
    printf("ft_strlcat -> %zu\n", ptr_lcat);
    to_find = ft_strchr(str_chr, 'e');
    printf("ft_strchr -> %s\n", to_find);
    to_findr = ft_strrchr(str_rchr, 'e');
    printf("ft_strrchr -> %s\n", to_findr);
    ptr_strstr = ft_strstr(str_str, str_strr);
    printf("ft_strstr -> %s\n", ptr_strstr);
	ptr_strnstr = ft_strnstr(str_nstr, str_nstrr, 2);
	printf("ft_strnstr -> %s\n", str_nstr);
    printf("ft_strcmp -> %d\n", ft_strcmp("MartiaAn", "Martiaan"));
	printf("ft_strncmp -> %d\n", ft_strncmp("MatiAn", "MatiAaaaAn", 4));*/

	ft_memset(buffer, 3, 5);
	printf("ft_memset -> %d\n", buffer[i]);
	ft_bzero(string, 2);
	printf("ft_bzero -> %d\n", string[1]);
	ptr_memcpy = ft_memcpy(s1, s2, 2);
	printf("ft_memcpy -> %s\n", ptr_memcpy);
    	ptr_memccpy = ft_memccpy(str1, str2, 'f', ft_strlen(str2));
    	printf("ft_memccpy -> %s\n", ptr_memccpy);
    	ft_strcpy(from, "blessings");
    	ft_memmove(to, from, 10);
    	printf("ft_memmove -> %s\n", to);
	ptr_memchr = ft_memchr(buf, 'o', ft_strlen(buf));
    	printf("ft_strchr -> %s\n", ptr_memchr);
    	printf("ft_strcmp -> %d\n", ft_memcmp("martian", "Martian", 7));
    
}
