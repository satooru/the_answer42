#include	<unistd.h>

void	print(char a, char b, char c)
{
	if (!(a == '0' && b == '1' && c == '2'))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				print(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a;
	}
}
