#include	<unistd.h>

void	ft_print_alphabet(void)
{
	int	ascii;

	ascii = 97;
	while (ascii <= 122)
	{
		write(1, &ascii, 1);
		ascii++;
	}
}
