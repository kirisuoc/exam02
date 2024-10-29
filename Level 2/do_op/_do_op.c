#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	num1;
	int	num2;
	int	result;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if (argv[2][0] == '+')
			result = num1 + num2;
		if (argv[2][0] == '-')
			result = num1 - num2;
		if (argv[2][0] == '*')
			result = num1 * num2;
		if (argv[2][0] == '/')
			result = num1 / num2;
		if (argv[2][0] == '%')
			result = num1 % num2;
		printf("%d", result);
	}
		printf("\n");
	return (0);
}
