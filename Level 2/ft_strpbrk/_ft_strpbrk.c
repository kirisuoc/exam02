#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;

	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (NULL);
}

int	main(void)
{
	char *str1 = "HOla, me llamo Erik";
	char *str2 = "oe";

	printf("%s\n", ft_strpbrk(str1, str2));

	return (0);
}
