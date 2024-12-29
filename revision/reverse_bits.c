#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	reverse_byte = 0;

	while (i > 0)
	{
		reverse_byte = reverse_byte * 2 + (octet % 2);
		octet /= 2;
		i--;
	}
	return (reverse_byte);
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
	__uint8_t letter = 0b01000001;
	print_bits(letter);
	write(1, "\n", 1);
	unsigned char new_letter = reverse_bits(letter);
	print_bits(new_letter);

	return (0);
}