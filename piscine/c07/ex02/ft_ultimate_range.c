#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;
	int	*temp;

	*range = NULL;
	if (min >= max)
	{
		return (0);
	}
	temp = (int *) malloc(sizeof(int) * (max - min));
	if (temp == NULL)
		return (-1);
	index = 0;
	while (min < max)
	{
		temp[index] = min;
		min ++;
		index++;
	}
	*range = temp;
	return (index);
}
