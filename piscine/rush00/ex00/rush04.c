void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	c;

	l = 0;
	x--;
	y--;
	while (l <= y)
	{
		c = 0;
		while (c <= x)
		{
			if ((l == 0 && c == 0) || (l == y && c == x && l > 0 && c > 0))
				ft_putchar('A');
			else if ((l == 0 && c == x) || (l == y && c == 0))
				ft_putchar('C');
			else if (l == 0 || l == y || c == 0 || c == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		ft_putchar('\n');
		l++;
	}
}
