#include <stdio.h>

char *ft_strrev(char *str)
{
	int		x = 0;
	int		y = 0;
	char	temp;
	if(!str)
		return (str);
	while(str[x])
		x++;
	x--;
	while(x > y)
	{
		temp = str[y];
		str[y] = str[x];
		str[x] = temp;
		x--;
		y++;
	}
	return (str);
}
