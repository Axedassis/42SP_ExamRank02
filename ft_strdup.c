#include <stdlib.h>

static int strlen(char *str)
{
	int size = 0;
	while(str[size])
		size++;
	return (size);
}
char *ft_strdup(char *src)
{
	int		i = 0;
	if(!src)
		return ((void *)0);
	char	*new_str = (char *)malloc((strlen(src) + 1) * sizeof(char));
	if(!new_str)
		return ((void *)0);
	while(src[i])
	{
		new_str[i] = src[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
