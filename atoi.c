#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int atoi = 0;
	int sign = 1;

	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		atoi = atoi * 10 + (str[i] - '0');
		i++;
	}
	return (atoi * sign);
}
int main(int argc, char const *argv[])
{
	if(argc == 2)
	{
	int	res = ft_atoi(argv[1]);
	printf("resultado: %d", res);
	}
	printf("\n");
	return 0;
}
