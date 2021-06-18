void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	index_smallest;
	int	index_altered;

	if (size <= 1)
		return ;
	index = 0;
	index_smallest = 0;
	index_altered = 0;
	while (index_altered < size)
	{
		if (index > index_altered && tab[index] < tab[index_smallest])
			index_smallest = index;
		if (index == size)
		{
			index = tab[index_altered];
			tab[index_altered] = tab[index_smallest];
			tab[index_smallest] = index;
			index_smallest = index_altered++ + 1;
			index = 0;
		}
		else
			index++;
	}
}
