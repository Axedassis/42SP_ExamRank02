#include <stdlib.h>
#include <stdio.h>

int		nbr_size(int nbr)
{
	int		size = 0;
	if (nbr < 0)
	{
		nbr = -nbr;
		size++;
	}
	while(nbr != 0)
	{
		nbr /= 10;
		size++;
	}
	return (size);
}

char *ft_itoa(int nbr)
{
	if(nbr == 0)
		return ("0");
	if(nbr == -2147483648)
		return("-2147483648");
	int		size = nbr_size(nbr);
	int		j = size - 1;
	char	*str = (char *)malloc(sizeof(char) * size + 1);
	if(!str)
		return ((void *)0);
	str[size] = '\0';
	if(nbr < 0)
	{
		str[0] = '-';
		nbr = -nbr;
	}
	while(nbr != 0)
	{
		str[j] = (nbr % 10) + '0';
		nbr /= 10;
		j--;
	}
	return (str);
}


int main(void)
{
	int		value = -2147483648;
	
	printf("resultado: %s\n", ft_itoa(value));
	return (0);
}