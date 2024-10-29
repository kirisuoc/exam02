#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	int	j = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
			{
				return (i);
			}
			j++;
		}
		i++;
	}
	return (i);
}

int	main(void)
{
	char *string = "Hola, me llamo Erik";
	char *reject = "ev";

	printf("Los primeros %zu caracteres del string no coindicen con reject.\n", ft_strcspn(string, reject));
	return (0);
}
