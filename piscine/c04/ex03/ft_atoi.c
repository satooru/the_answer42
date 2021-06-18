int	ft_atoi(char *str)
{
	int	negative;
	int	result;

	negative = 0;
	result = 0;
	while (*str == '\f' || *str == '\n' || *str == '\r'
		|| *str == '\t' || *str == '\v' || *str == ' ')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	if (negative % 2 == 1)
		return (result * -1);
	return (result);
}
