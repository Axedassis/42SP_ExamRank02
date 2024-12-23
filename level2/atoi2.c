int	ft_atoi(const char *str)
{
	int		atoi = 0;
	int		signal = 1;
	int		i = 0;

	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	if(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
			signal = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		atoi = atoi * 10 + (str[i] - '0');
		i++;
	}
	return (atoi * signal);
}

#include <stdio.h>
int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		char *res = argv[1];
		printf("resultado: %d", ft_atoi(res));
	}
	printf("\n");
	return 0;
}
