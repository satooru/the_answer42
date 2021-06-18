void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	aux;

	if (size <= 1)
		return ;
	index = 0;
	aux = 0;
	while (size > 1 && index < size)
	{
		aux = tab[index];
		tab[index] = tab[size - 1];
		tab[size - 1] = aux;
		size--;
		index++;
	}
}
