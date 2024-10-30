#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	return ((n & (n - 1)) == 0);
}

int	main(void)
{
	int	number = 9;

	if (is_power_of_2(number))
		printf("El número %d es potencia de 2\n", number);
	else
		printf("El número %d NO es potencia de 2", number);
	return (0);
}
