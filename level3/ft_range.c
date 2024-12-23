#include <stdlib.h>

int *ft_range(int start, int end)
{
	int		i = 0;
	int		len = abs((end - start)) + 1;
	int		*res = (int *)malloc(sizeof(int) * len);

	while (i < len)
	{
		if(start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
	return (res);
}

#include <stdio.h>

int main(void)
{
	int start = 2;
	int end = -3;
	int *range = ft_range(start, end);
	int len = abs(end - start) + 1;
	int i = 0;

	while(i < len)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");

	free(range);
	return 0;
}