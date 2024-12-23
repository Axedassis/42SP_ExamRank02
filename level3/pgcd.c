#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	if(argc == 3)
	{
		int		a = atoi(argv[1]);
		int		b = atoi(argv[2]);
		int		n = 0;
		int		mdc = 0;
		int		i = 1;
		if(a < 0 || b < 0)
		{
			printf("\n");
			return 0;
		}
		if(a > b)
			n = a;
		else
			n = b;
		while(i <= n)
		{
			if(a % i == 0 && b % i == 0)
				mdc = i;
			i++;
		}
		printf("%d", mdc);
	}
	printf("\n");
	return 0;
}
