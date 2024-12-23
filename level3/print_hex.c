#include <unistd.h>
#include <stdio.h>

void	to_hex(int value, char *hex)
{
	if(value >= 16)
		to_hex(value / 16, hex);
	int letter = value % 16;
	write(1, &hex[letter], 1);
}

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		char *hex = "0123456789abcdef";
		char *ptr = argv[1];
		int	value = 0;
		while(*ptr)
		{
			value = value * 10 + (*ptr - '0');
			ptr++;
		}
		to_hex(value, hex);
	}
	write(1, "\n", 1);
	return 0;
}