#include <unistd.h>
unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

#include <stdio.h>

int main(void)
{
	unsigned char octet = 0b01001101; // Example input
	unsigned char reversed = reverse_bits(octet);
	
	printf("Original: %u\n", octet);
	printf("Reversed: %u\n", reversed);
	
	return 0;
}