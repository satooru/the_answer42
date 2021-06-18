#include	<unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	ascii;

	ascii = 122;
	while (ascii >= 97)
	{
		write(1, &ascii, 1);
		ascii--;
	}
}
