int	ft_sqrt(int nb)
{
	int	i;
	int	last_result;

	i = 0;
	last_result = 0;
	if (nb <= 0)
		return (0);
	while (last_result <= nb && i < 46341)
	{
		if (last_result == nb)
			return (i);
		else if (last_result > nb)
			return (0);
		i++;
		last_result = i * i;
	}
	return (0);
}
