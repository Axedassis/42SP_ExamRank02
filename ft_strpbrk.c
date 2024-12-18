char	*ft_strpbrk(const char *s1, const char *s2)
{
	int		i = 0;

	if(!s1 || !s2)
		return ((void *)0);
	while(*s1)
	{
		while(s2[i] && *s1 != s2[i])
			i++;
		if(s2[i] != '\0')
			return ((char *)s1);
		i = 0;
		s1++;
	}
	return ((void *)0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	const char *s1 = "hello world";
	const char *s2 = "ow";
	char *result;

	result = ft_strpbrk(s1, s2);
	if (result)
		printf("First matching character: %c\n", *result);
	else
		printf("No matching characters found.\n");

	return 0;
}