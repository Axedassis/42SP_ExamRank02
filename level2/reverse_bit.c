#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char byte = 0;
	int		i = 8;

	while(i)
	{
		byte = byte * 2 + (octet % 16); 
		octet = octet / 16;
		i--;
	}
	return  (byte);
}
