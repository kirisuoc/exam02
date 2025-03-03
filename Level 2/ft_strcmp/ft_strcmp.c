#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char *str1 = "AAA";
	char *str2 = "AAb";

	printf("%u\n", ft_strcmp(str1, str2));
	printf("%u\n", strcmp(str1, str2));
	return (0);
}
