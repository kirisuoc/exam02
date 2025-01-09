#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int	len = 0;

	while (src[len])
		len++;

	char	*cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	int	i = 0;
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int	main(void)
{
	char *string = "Hola que tal";
	char *cpy = ft_strdup(string);

	printf("%s\n", cpy);
	return (0);
}
