char	*ft_strcpy(char *s1, char *s2)
{
	char	*temp_dest = s1;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	s1 = '\0';
	return (temp_dest);
}


int	main(void)
{
	char	*string = "HOlaaa";
	char	copy[8];

	printf("%s\n", ft_strcpy(copy, string));
	return (0);
}
