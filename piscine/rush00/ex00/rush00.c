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
			if ((col == 0 || col == x - 1) && (line == 0 || line == y - 1 ))
				ft_putchar('o');
			else if (line == 0 || line == y - 1)
				ft_putchar('-');
			else if (col == 0 || col == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		line++;
	}
}
