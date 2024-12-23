int	max(int* tab, unsigned int len)
{
	unsigned int		i = 0;
	if(len == 0)
		return (0);
	int		max = tab[i];
	while(i < len)
	{
		if(tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

#include <stdio.h>

int main(void)
{
	int arr[] = {1, 3, 7, 2, 5};
	unsigned int len = sizeof(arr) / sizeof(arr[0]);
	int result = max(arr, len);
	printf("The maximum value is: %d\n", result);
	return 0;
}