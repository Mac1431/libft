#include "libft.h"

char    *ft_strmap(char const *s, char (*f)(char))
{
    size_t  i;
    char    *str;

    i = 0;
	if (!s)
		return (NULL);
    str = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
   	if (!str)
        return (NULL);
    while (i < ft_strlen(s))
    {
        str[i] = f(s[i]);
        i++;
    }
	str[i] = '\0';
    return (str);
}
