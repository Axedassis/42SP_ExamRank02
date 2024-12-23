#include <unistd.h>

void ft_puntbr(int value)
{
	if (value >= 10)
		ft_puntbr(value / 10);
	char letter = (value % 10) + '0';
	write(1, &letter, 1);
}

int		ft_atoi(char *str)
{
	int		i = 0;
	int		signal = 1;
	int		value = 0;

	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-')
	{
		signal = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + (str[i] - '0');
		i++;
	}
	return (value * signal);

}

int main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		int		i = 1;
		int		value = ft_atoi(argv[1]);

		while(i <= 9)
		{
			ft_puntbr(i);
			write(1, " x ", 3);
			ft_puntbr(value);
			write(1, " = ", 3);
			ft_puntbr(i * value);
			write(1, "\n", 1);
			i++;
		}
	}
	return 0;
}
