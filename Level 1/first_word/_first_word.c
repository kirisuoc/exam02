#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (1);
	}
	else
	{
		while (argv[1][i] == 32 || argv[1][i] == 9)
		{
				i++;
		}
		while (argv[1][i] != 32 && argv[1][i] != 9 && argv[1][i] != '\0')
		{
			write(1, &argv[1][i], 1);
			i++;
		}

	}
	return (0);
}
