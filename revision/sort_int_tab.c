void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int		x = 0;
	unsigned int		y = 0;

	while(x < size)
	{
		y = x;
		while(y < size)
		{
			if(tab[y] < tab[x])
			{
				int	tmp = tab[y];
				tab[y] = tab[x];
				tab[x] = tmp;
			}
			y++;
		}
		x++;
	}
}

#include <stdio.h>
int main(void)
{
	int value[] = {5, 2, 9, 7, 7, 1, 4};
	sort_int_tab(value, 6);
	int		i = 0;
	while(i < 6)
	{
		printf("Values: %d\n", value[i]);
		i++;
	}
	return (0);
}