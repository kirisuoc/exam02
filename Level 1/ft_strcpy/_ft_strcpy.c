#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	char *s1_cpy = s1;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return s1_cpy;
}

int	main(void)
{
	char *string = "hola";
	char copia[5];

	ft_strcpy(copia, string);
	printf("%s\n", copia);
	return (0);
}
