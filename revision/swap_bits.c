#include <unistd.h>

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char byte;
	byte = (octet << 4) | (octet >> 4);
	return (byte); 
}

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
	unsigned char letter = 97;
	print_bits(letter);
	write(1, "\n", 1);
	unsigned char new_letter = swap_bits(letter);
	print_bits(new_letter);

	return (0);
}