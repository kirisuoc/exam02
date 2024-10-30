#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int				max;
	unsigned int	i = 0;

	if (len == 0)
		return (0);
	max = tab[i];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int	main(void)
{
	int	tab[] = {5, 2, 9, 6, 1, 15};
	unsigned int	len = 6;

	printf("El máximo es el número %d.\n", max(tab, len));
	return (0);
}
