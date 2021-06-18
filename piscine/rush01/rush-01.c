#include	<unistd.h>
#include	<stdio.h>
#include	<stdlib.h>

void	print_tower_grid(int **tower_grid)
{
	int line;
	int column;
	int print;

	line = 0;
	while(line < 4)
	{
		column = 0;
		while(column < 4)
		{
			print = tower_grid[column][line];
			print += 48;
			write(1, &print, 1);
			write(1, " ", 1);
			column++;
		}
		write(1, "\n", 1);
		line++;
	}
}

void	insert_tower_grid(int **tower_grid, int column, int line, int value)
{
	tower_grid[column][line] = value;
}

int	main(void)
{
	int dimension;
	int *tower_grid[4];
	int i;

	dimension = 4;
	i = 0;
	while(i < dimension)
	{
		tower_grid[i] = (int *) malloc(dimension * sizeof(int)); //linha
		i++;
	}

	print_tower_grid(tower_grid);
	insert_tower_grid(tower_grid, 0, 0, 1);
	write(1, "\n", 1);
	print_tower_grid(tower_grid);
}
