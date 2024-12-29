#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int		nbr = atoi(argv[1]);
		int		i = 2;

		if(nbr == 1)
			printf("%d", nbr);
		else
			while(i <= nbr)
			{
				if(i == nbr)
				{
					printf("%d", i);
					break;
				}
				if(nbr % i == 0)
				{
					printf("%d*", i);
					nbr  = nbr / i;
					i = 2;
				}
				i++;
			}
	}
	printf("\n");
	return (0);
}