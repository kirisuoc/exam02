#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i = 0;
	int	temp;

	while (i < (size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i+ 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

int	main(void)
{
	int	tab[] = {2, 6, 7, 0};
	for (int i = 0; i < 4; i++)
		printf("%d\n", tab[i]);
	sort_int_tab(tab, 4);
	for (int i = 0; i < 4; i++)
		printf("%d\n", tab[i]);
	return (0);
}
