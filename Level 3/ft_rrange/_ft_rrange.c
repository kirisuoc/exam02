#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	i = 0;
	int	len = abs((start - end)) + 1;
	int	*res = malloc(sizeof(int) * len);

	while (i < len)
	{
		if (start < end)
		{
			res[i] = end;
			i++;
			end--;
		}
		else
		{
			res[i] = end;
			i++;
			end++;
		}
	}
	return (res);
}
int	main(void)
{
	int	*array = ft_rrange(-2, 2);

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", array[i]);
	}

	return (0);
}
