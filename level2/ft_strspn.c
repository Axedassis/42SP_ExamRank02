#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int		size = 0;
	while(*s)
	{
		int	i = 0;
		while(accept[i] && accept[i] != *s)
			i++;
		if(accept[i] == '\0')
			return(size);
		s++;
		size++;
		i = 0;
	}
	return (size);
}