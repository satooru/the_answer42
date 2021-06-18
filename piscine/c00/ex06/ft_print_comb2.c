#include	<unistd.h>

void	print_int(int number)
{
	int	unit;
	int	dozen;

	dozen = number / 10;
	dozen += 48;
	write(1, &dozen, 1);
	unit = number % 10;
	unit += 48;
	write(1, &unit, 1);
}

void	print(int i, int j)
{
	if (!(i == 0 && j == 1))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
	print_int(i);
	write(1, " ", 1);
	print_int(j);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			print(i, j);
			j++;
		}
		i++;
	}
}
