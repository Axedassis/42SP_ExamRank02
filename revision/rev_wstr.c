#include <unistd.h>

int ft_strlen(char *str)
{
	int		size = 0;
	
	while(str[size])
		size++;
	return (size);
}

int main(int argc, char *argv[])
{
	if(argc == 2)
	{
		char	*str = argv[1];
		int		i = ft_strlen(str) + 1;
		int		j = 0;

		while(i >= 0)
		{
			if(str[i -1] == ' ' || str[i - 1] == '\t')
			{
				write(1, &str[i], j - 1);
				write(1, " ", 1);
				j = 0;
			}
			i--;
			j++;
		}
		write(1, &str[i + 1], j - 2);
	}
	write(1, "\n", 1);
}