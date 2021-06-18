#include	<stdio.h>
void	ft_putstr(char *str);

int	main(void)
{
	int	a;
	int	b;

	a = 1234;
	b = 5;
	printf("%d %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d\n", a, b);
}
