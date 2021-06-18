#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	index;

	if (min >= max)
	{
		range = NULL;
		return (range);
	}
	range = (int *) malloc(sizeof(int) * (max - min));
	index = 0;
	while (min < max)
	{
		range[index] = min;
		min++;
		index++;
	}
	return (range);
}
