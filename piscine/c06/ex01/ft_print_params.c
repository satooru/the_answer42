#include	<unistd.h>

int	main(int argc, char **argv)
{
	int	params;

	params = 1;
	while (params < argc)
	{
		while (*argv[params])
		{
			write(1, argv[params], 1);
			argv[params]++;
		}
		params++;
		write(1, "\n", 1);
	}
	return (0);
}
