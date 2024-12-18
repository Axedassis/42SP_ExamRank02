#include <unistd.h>

int main(int argc, char *argv[])
{
	if(argc == 3)
	{
		int map[128] = {0};
		int	i = 0;
		while(argv[2][i])
		{
			map[(unsigned char)argv[2][i]] += 1;
			i++;
		}
		i = 0;
		while(argv[1][i])
		{
			map[(unsigned char)argv[1][i]] += 1;
			if(map[(unsigned char)argv[1][i]] == 2)
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
