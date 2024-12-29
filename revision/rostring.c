#include <stdlib.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		char	*str = argv[1];
		int		i  = 0;
		int		i_pst;

		while(str[i] == ' ' || str[i] == '\t')
			i++;
		i_pst = i;
		while(str[i] != ' ' && str[i] != '\t')
			i++;
		while(str[i] == ' ' || str[i] == '\t')
			i++;
		while(str[i])
		{
			if(str[i + 1] == '\0')
			{
				write(1, &str[i], 1);
				write(1, " ", 1);
				break;
			}
			if(str[i] == ' ' || str[i] == '\t')
			{
				write(1, " ", 1);
				while(str[i] == ' ' || str[i] == '\t')
					i++;
			}
			write(1, &str[i], 1);
			i++;
		}
		while(str[i_pst] != ' ' && str[i_pst] != '\t' && str[i_pst])
		{
			write(1, &str[i_pst], 1);
			i_pst++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
