#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i = 0;
	int	len = 0;
	char	temp;

	while (str[len])
		len++;
	len--;

	while (i < len)
	{
		temp = str[i];
 		str[i] = str[len];
		str[len] = temp;
 		len--;
		i++;
	}
	return (str);
}

int	main(void)
{
	char string[] = "Avion rapido.";

	printf("%s\n", string);
	printf("%s\n", ft_strrev(string));
	return (0);
}
