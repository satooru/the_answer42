#include	<unistd.h>

int	ft_int_pow(int base, int power)
{
	int	result;

	result = 1;
	while (power != 0)
	{
		result *= base;
		--power;
	}
	return (result);
}

int	ft_should_print( int number)
{
	int	digits;
	int	aux;
	int	last_digit;

	aux = number;
	digits = 0;
	last_digit = -1;
	if (aux != 0)
	{
		aux /= 10;
		digits++;
	}
	while (digits > 0)
	{
		if (digits == 1)
			aux = number % 10;
		else
			aux = number / ft_int_pow(10, digits - 1);
		if (aux >= last_digit)
			return (0);
		last_digit = aux;
		digits--;
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
		ft_putnbr(nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		nb += 48;
		write(1, &nb, 1);
	}
}

void	ft_print_combn(int n)
{
	int	number;
	int	limit;

	limit = ft_int_pow(10, n);
	n--;
	number = 1;
	while (number < limit)
	{
		if (ft_should_print(number) == 1)
			write(1, "0", 1);
		number++;
	}
}
