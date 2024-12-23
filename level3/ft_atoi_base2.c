#include <stdio.h>

char to_lower(char c)
{
	char letter = c;

	if(letter >= 'A' && letter <= 'Z')
		letter += 32;
	return (letter);
}

int get_digit(char letter, int	base_digit)
{
	int		max_digits = 0;

	if (base_digit <= 10)
		max_digits = (base_digit - '0') - 1;
	else
		max_digits = base_digit - 10 - 1 + 'a';

	if (letter >= '0' && letter <= '9' && letter <= max_digits)
		return (letter - '0');
	else if(letter >= 'a' && letter <= 'f' && letter <= max_digits)
		return (letter + 10 - 'a');
	else
		return (-1);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		result = 0;
	int		singal = 1;
	int		digit;

	if (str_base < 2 || str_base > 16)
		return (0);

	if(*str == '-')
	{
		singal = -1;
		str++;
	}

	while(str)
	{
		digit = get_digit(to_lower(*str), str_base);
		if(digit == -1)
			break;
		str++;
		result = result * str_base + digit;
	}
	return (result * singal);
}

#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int base = 0;
	  char *ptr = argv[2];
		while(*ptr)
		{
			base = base * 10 + (*ptr - '0');
			ptr++;
		}
		int result = ft_atoi_base(argv[1], base);
		printf("resultado: %d", result);
	}
}