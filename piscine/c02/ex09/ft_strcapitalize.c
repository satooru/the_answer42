void	capitalize(char *str, int i, int *alphan)
{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		if (*alphan == 1)
			str[i] -= 32;
		*alphan = 0;
	}
	else if (str[i] >= 'A' && str[i] <= 'Z')
	{
		if (*alphan == 0)
			str[i] += 32;
		*alphan = 0;
	}
	else if (str[i] >= '0' && str[i] <= '9')
		*alphan = 0;
	else
		*alphan = 1;
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	alphan;

	i = 0;
	alphan = 1;
	while (str[i] != '\0')
	{
		capitalize(str, i, &alphan);
		i++;
	}
	return (str);
}
