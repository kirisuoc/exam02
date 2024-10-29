#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strrev(char *str)
{
	int		start = 0;
	int		end = ft_strlen(str) - 1;
	char	temp;

	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	return (str);
}

int	main(void)
{
	char str[] = "Hola";

	printf("%s\n", ft_strrev(str));
	return (0);
}
