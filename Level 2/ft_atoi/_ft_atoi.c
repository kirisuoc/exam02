#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	result = 0;
	int	sign = 1;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	while (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

int	main(void)
{
	char *string = "-++178573";
	printf("%d\n", ft_atoi(string));

	return (0);
}
