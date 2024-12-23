#include <unistd.h>
int main(int argc, char *argv[])
{
	if(argc != 2)
		return (write(1, "\n", 1));
	char	*string = argv[1];
	char	value;
	while(*string)
	{
		value = *string;
		if(*string >= 97 && *string <= 122)
		{
			if(*string < 109)
				value = (109 - *string) + 110;
			else if(*string > 109)
				value = 110 - (*string - 109);
			else if (value == 109)
				value = 109 + 1;
		}
		else if(*string >= 65 && *string<= 90)
		{
			if(*string < 77)
				value = (77 - *string) + 78;
			else if(*string > 77)
				value = 78 - (*string - 77) ;
			else if (value == 77)
				value = 77 + 1;
		}
		write(1, &value, 1);
		string++;
	}
	write(1, "\n", 1);
	return (0);
}
