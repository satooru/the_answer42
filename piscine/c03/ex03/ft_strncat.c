char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*temp;
	unsigned int	i;

	temp = dest;
	i = 0;
	while (*temp != '\0')
	{
		temp++;
	}
	while (i < nb && *src != '\0')
	{
		*temp++ = *src++;
		i++;
	}
	*temp = '\0';
	return (dest);
}
