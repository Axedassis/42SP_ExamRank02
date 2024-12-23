#include <stdlib.h>

int nlength(int nbr)
{
	int		i = 0;
	if(nbr == 0)
		return (1);
	while(nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int ft_abs(int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

char	*ft_itoa(int nbr)
{
	int	nsize = nlength(nbr);
	int	i = 0;

	if(nbr < 0)
		i++;
	nsize = nsize + i;
	char *itoa = (char *)malloc(sizeof(char) * nsize + 1);
	if(nbr < 0)
		itoa[0] = '-';
	itoa[nsize - 1] = '\0';
	while((nsize - 1) >= i)
	{
		itoa[nsize - 1] = ft_abs(nbr % 10) + '0';
		nbr /= 10;
		nsize--;
	}
	return (itoa);
}

#include <stdio.h>

int main(void)
{
	int numbers[] = {0, 123, -456, 7890, -2147483648};
	char *result;
	for (int i = 0; i < 5; i++)
	{
		result = ft_itoa(numbers[i]);
		if (result)
		{
			printf("ft_itoa(%d) = %s\n", numbers[i], result);
			free(result);
		}
		else
		{
			printf("Memory allocation failed for %d\n", numbers[i]);
		}
	}
	return 0;
}