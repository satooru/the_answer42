#include <stdio.h>
char    *ft_strupcase(char *str)
{
	char *tmp;
	tmp = str;
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
            *str -= 32;
        str++;
    }
    return (tmp);
}
