#include	<stdio.h>
#include	<stdlib.h>
int	ft_str_is_printable(char *str);

int	main(void)
{
	char *string;

	string = calloc(10, sizeof(char));
	string = "abcde©\0";
	printf("%d", ft_str_is_printable(string));
}
