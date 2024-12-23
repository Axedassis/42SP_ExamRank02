#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				byte = 8;
	unsigned char	bit;

	while(byte--)
	{
		bit = (octet >> byte & 1) + '0';
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