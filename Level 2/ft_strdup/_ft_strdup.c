#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		src_len = ft_strlen(src);
	int		i = 0;

	dup = malloc((src_len + 1) * sizeof(*dup));
	if (dup == NULL)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	main(void)
{
	char	*orig = "HOlaaaa";
	char	*copy = ft_strdup(orig);

	printf("%s\n", copy);
	free(copy);
	return (0);
}
