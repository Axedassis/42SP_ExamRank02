#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 8; //many bits has a byte
	unsigned char bit;

	while(i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

int main(void)
{
	unsigned char test = 2; // Example value to test
	print_bits(test);
	write(1, "\n", 1);
	return 0;
}