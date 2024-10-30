#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int argc, char **argv)
{

	if (argc == 2)
	{
		int	len = ft_strlen(argv[1]);
		while (argv[1][len - 1] == ' ')
			len--;
		while (argv[1][len - 1] != ' ' && argv[1][len - 1] != '\t' && len > 0)
			len--;
		while (argv[1][len])
		{
			write(1, &argv[1][len], 1);
			len++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
