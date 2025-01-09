#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int a = 4;
	int	b = 2;

	ft_swap (&a, &b);
	printf("a era 4, ahora: %d\nb era 2, ahora: %d\n", a, b);
	return (0);
}
