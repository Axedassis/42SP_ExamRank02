#include <unistd.h>

void ft_putnbr(int value)
{
	if(value >= 10)
		ft_putnbr(value / 10);
	char letter = (value % 10) + '0';
	write(1, &letter, 1);
}

int main(int argc, char *argv[])
{
	if(argv[0])
		write(0, "", 0);
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}