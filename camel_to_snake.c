#include <stdlib.h>
#include <unistd.h>

static int	capital_letter(char *string)
{
	int		amount = 0;
	while(*string)
	{
		if(*string >= 65 && *string <= 90)
			amount++;
		string++;
	}
	return (amount);
}

static int ft_strlen(char *string)
{
	int		size = 0;
	while(string[size])
		size++;
	return (size);
}

int main(int argc, char *argv[])
{
	int		i = 0;
	int		j = 0;

	if(argc == 2)
	{
		int		C_letter = capital_letter(argv[1]);
		int		string_size = ft_strlen(argv[1]);
		char	*string = (char *)malloc(C_letter + string_size + 1);
		
		while(argv[1][i])
		{
			if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				string[j] = '_';
				j++;
				string[j] = argv[1][i] + 32;
			}
			else
				string[j] = argv[1][i];
			i++;
			j++;
		}
		string[i] = '\0';
		write(1, string, ft_strlen(string));
	}
	write(1, "\n", 1);
	return (0);
}