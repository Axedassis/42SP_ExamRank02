#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		int		value = atoi(argv[1]);
		int		i = 2;
		if(value == 1)
			printf("1");
		while(i <= value)
		{
			if(value % i == 0)
			{
				printf("%d", i);
				if(value == i)
					break;
				printf("*");
				value /= i;
				i = 1;
			}
			i++;
		}
	}
	printf("\n");
	return (0);
}