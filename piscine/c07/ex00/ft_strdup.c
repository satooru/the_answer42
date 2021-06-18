#include <stdlib.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i++);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;

	dup = (char *) malloc(ft_strlen(src));
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
