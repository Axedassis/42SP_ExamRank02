#include <unistd.h>

int main(int argc, char const *argv[])
{
	if(argc == 2)
	{
		int		i = 0;
		int		j = 0;

		while(argv[1][i])
		{
			if(argv[1][i] == ' ' && argv[1][i + 1] >= 33 && argv[1][i + 1] <= 126)
				j = i + 1;
			i++;
		}
		while(argv[1][j] >= 33 && argv[1][j] <= 127)
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
