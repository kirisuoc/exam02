#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{

	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	main(void)
{
	char *str1 = "AAa";
	char *str2 = "AAx";

	printf("%u\n", ft_strcmp(str1, str2));
	printf("%u\n", strcmp(str1, str2));
	return (0);
}
