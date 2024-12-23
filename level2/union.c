#include <unistd.h>

int main(int argc, char const *argv[])
{
	if(argc == 3)
	{
		int		i = 0;
		int		j = 0;
		int		map[256] = {0};
		int		map2[256] = {0};
		while(argv[1][i])
		{
			j = 0;
			while(argv[2][j])
			{
				if(argv[2][j] == argv[1][i])
				{
					if(!map[(unsigned char)argv[1][i]])
					{
						write(1, &argv[1][i], 1);
						map[(unsigned char)argv[1][i]] = 1;
					}
					break;
				}
				if(map2[(unsigned char)argv[2][j]] != 2)
					map2[(unsigned char)argv[2][j]]  +=  1;
				j++;
			}
			i++;
		}
		i = 0;
		while(i < 256)
		{
			if(map2[i] == 1)
				write(1, (char *)&i, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
