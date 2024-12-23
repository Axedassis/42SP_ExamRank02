#include <stdlib.h>

int nlen(int nbr)
{
	int		i;
	
	if(nbr == 0)
		return (1);
	i = 0;
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
	char *cnum;
	int len;
	int i;

	len = nlen(nbr); // how many char
	i = 0;
	if(nbr < 0) // verify if is negative to store the space to the '-'
		i++;
	len = len + i;
	cnum = (char *)malloc((len + 1) * sizeof(char)); // +1 == nullbyte
	if(!cnum)
		return ((void *)0);
	cnum[0] = '-';
	cnum[len] = '\0';
	while ((len - 1) >= i)
	{
		cnum[len - 1] = ft_abs(nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (cnum);
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