#include	<stdio.h>
void	ft_ft(int *nbr);

int	main(void)
{
	int	a;

	a = 0;
	printf("%d\n", a);
	ft_ft(&a);
	printf("%d\n", a);
}
