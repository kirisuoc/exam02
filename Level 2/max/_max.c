#include <limits.h>
#include <stdio.h>

int	max (int *tab, unsigned int len)
{
	unsigned int	i = 0;
	int	max = tab[0];

	if (len == 0)
		return (0);

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
	int	tab[] = {4, 3, 6, -1, 4};

	printf("%d\n", max(tab, 5));

	return (0);
}
