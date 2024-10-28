#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int	alpha_index = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				alpha_index = argv[1][i] - 'a' + 1;
			else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				alpha_index = argv[1][i] - 'A' + 1;
			else
				alpha_index = 1;
			while (alpha_index--)
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
