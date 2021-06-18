#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;

	ft_div_mod(1234, 5, &a, &b);
	printf("%d %d", a, b);
}
