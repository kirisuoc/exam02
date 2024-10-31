#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int main()
{
	unsigned char octet = 65; // Ejemplo: 01000001 en binario
	unsigned char reversed;

	write(1, "Original:   ", 13);
	print_bits(octet);
	write(1, "\n", 1);

	reversed = reverse_bits(octet);

	write(1, "Reversed:   ", 13);
	print_bits(reversed);
	write(1, "\n", 1);

	return 0;
}
