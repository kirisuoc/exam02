#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

int	main(void)
{
	char *str = "Ey que pasa";

	printf("The length of %s is: %d\n", str, ft_strlen(str));

	return (0);
}
