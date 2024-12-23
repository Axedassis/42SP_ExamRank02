#include <unistd.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int		i;
	int		j;
	int		seen[256] = {0};
	if(argc == 3)
	{
		i = 0;
		while(argv[1][i])
		{
			j = 0;
			while(argv[2][j])
			{
				if(argv[2][j] == argv[1][i])
				{
					if(!seen[(unsigned char)argv[1][i]])
					{
						write(1, &argv[1][i], 1);
						seen[(unsigned char)argv[1][i]] = 1;
					}
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
