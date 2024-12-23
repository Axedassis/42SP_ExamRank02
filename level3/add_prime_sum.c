#include <unistd.h>

void	putnbr(int value)
{
	if(value >= 10)
		putnbr(value / 10);
	char letter = (value % 10) + '0';
	write(1, &letter, 1);

}

int	ft_atoi(char *str)
{
	int	value = 0;
	int	i = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		value = str[i] - '0';
		i++;
	}
	return (value);
}

int	is_prime(int value)
{
	int	i = 2;

	if(value <= 1)
		return (0);
	while((i * i) <= value)
	{
		if(value % i == 0)
			return (0);
		i++;
	}
	 return (1);
}

int main(int argc, char *argv[])
{
	int	sum = 0;

	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);

		while(num > 0)
		{
			if(is_prime(num))
			{
				sum += num;
			}
			num--;
		}
	}
	putnbr(sum);
	write(1, "\n", 1);
	return (0);
}
