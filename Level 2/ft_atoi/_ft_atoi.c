#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	sign = 1;
	int	result = 0;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

int	main(void)
{
	char *string = "    -45";
	int number = ft_atoi(string);
	int number2 = atoi(string);
	printf("%d\n", number);
	printf("%d\n", number2);

	return (0);
}
