#include <unistd.h>

char	*rev_print(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	while (--i >= 0)
		write (1, &str[i], 1);
	return (str);
}

int	main(void)
{
	rev_print("tnirp esreveR");
	write(1, "\n", 1);
	return (0);
}
