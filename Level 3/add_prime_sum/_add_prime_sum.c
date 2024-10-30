#include <unistd.h>

int	atoi(char *str)
{
	int	res = 0;

	while (*str)
		res = res * 10 + *str++ - '0';
	return (res);
}

int	is_prime(int n)
{
	int	i = 2;
	if (n <= 1)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void put_nbr(int n)
{
	if (n >= 10)
		put_nbr(n / 10);
	char	digit = n % 10 + '0';
	write(1, &digit, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int	sum = 0;
		int	num = atoi(argv[1]);
		while (num > 0)
		{
			if (is_prime(num))
				sum += num;
			num--;
		}
		put_nbr(sum);
	}
	if (argc != 2)
		put_nbr(0);
	write(1, "\n", 1);

	return (0);
}
