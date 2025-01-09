#include <string.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i = 0;
	int	j = 0;

	while (s[i])
	{
		j = 0;
		int	is_in_accept = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				is_in_accept = 1;
			j++;
		}
		if (is_in_accept == 0)
			return (i);
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("%zu\n", ft_strspn("hola que tal", "aohlt uq"));
	return (0);
}
