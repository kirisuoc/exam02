#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
	int	first_number = atoi(av[1]);
	int	second_number = atoi(av[3]);
	int	result = 0;

	if (ac == 4)
	{
		if (av[2][0] == '+')
			result = first_number + second_number;
		else if (av[2][0] == '-')
			result = first_number - second_number;
		else if (av[2][0] == '*')
			result = first_number * second_number;
		else if (av[2][0] == '/')
			result = first_number / second_number;
		else if (av[2][0] == '%')
			result = first_number % second_number;

		printf("%d", result);
	}
	printf("\n");
	return (0);
}
