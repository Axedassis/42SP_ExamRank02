#include <unistd.h>

int get_digit(char c, int digits_in_base)
{
	int		max_digit;

	if (digits_in_base <= 10)
		max_digit = digits_in_base - 1 + '0';
	else
		max_digit = digits_in_base - 10 - 1 + 'a';
	
	if(c >= '0' && c <= '9' && c <= max_digit)
		return (c - '0');
	else if (c >= 'a' && c <= 'f' && c <= max_digit)
		return (10 + c - 'a');
	else
		return (-1);
}

char to_lower(char str)
{
	char letter = str;

	if(str >= 'A' && str <= 'Z')
		letter = str + 32;
	return (letter);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int		result = 0;
	int		sign = 1;
	int		digit;

	if(!str || str_base < 2 || str_base > 16)
		return (0);
	if(*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str)
	{
		digit = get_digit(to_lower(*str), str_base);
		if(digit == -1)
			break;
		result = (result * str_base) + digit;
		str++;
	}
	return (result * sign);
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
	write(1, "\n", 1);
}