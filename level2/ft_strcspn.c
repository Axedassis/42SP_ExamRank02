#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int		i = 0;
	size_t	size = 0;
	while(*s)
	{
		while(reject[i] && *s != reject[i])
			i++;
		if(reject[i] != '\0')
			return (size);
		i = 0;
		s++;
		size++;
	}
	return (size);
}
