#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	unsigned char	bit;
	int				i = 7;

	while(i >= 0)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
		i--;
	}
}

int main(void)
{
	unsigned char nbr = 2;
	print_bits(nbr);
	return (0);
}