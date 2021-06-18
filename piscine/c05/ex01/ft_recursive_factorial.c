int	ft_recursive_factorial(int nb)
{
	unsigned int	result;
	int				n;

	result = 1;
	n = nb - 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(n));
}
