void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	line;
	int	col;

	line = 0;
	while (line < y)
	{
		col = 0;
		while (col < x)
		{
			if (line == 0 && (col == 0 || col == x - 1 ))
				ft_putchar('A');
			else if (line == y - 1 && (col == 0 || col == x - 1 ))
				ft_putchar('C');
			else if (line == 0 || line == y - 1 || col == 0 || col == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		line++;
	}
}
