#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i = 0;
	int	j;
	int	is_duplicate;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			is_duplicate = 0;

			int k = 0;
			while (k < i)
			{
				if (argv[1][k] == argv[1][i])
				{
					is_duplicate = 1;
					break ;
				}
				k++;
			}
			if (!is_duplicate)
			{
				while (argv[2][j])
				{
					if (argv[1][i] == argv[2][j])
					{
						write(1, &argv[1][i], 1);
						break ;
					}
					j++;
				}
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
