#include <stdlib.h>

static int ft_cnt_wrd(char *str)
{
	int		i = 0;
	int		wrd = 0;

	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while(str[i])
	{
		if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i + 1] == '\0')
		{
			while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				i++;
			wrd++;
		}
		i++;
	}
	return (wrd);
}

char *str_dup(char *str, int size)
{
	char	*new_str = (char *)malloc(sizeof(char) * size + 1);
	int		i = 0;
	if(!new_str)
		return ((void *)0);
	while(i < size)
	{
		new_str[i] = str[i];
		i++;
	}
	return (new_str);
}

char **ft_split(char *str)
{
	int		s_str = ft_cnt_wrd(str);
	char	**split = (char **)malloc(sizeof(char *) * s_str + 1);
	int		i = 0;
	int		split_index = 0;
	int		w_str = 0;
	split[s_str - 1] = (void *)0;

	while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	w_str = i;
	while(str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i + 1] == '\0')
		{
			if (str[i + 1] == '\0')
				split[split_index] = str_dup(&str[w_str], (i + 1) - w_str);
			else
				split[split_index] = str_dup(&str[w_str], i - w_str);
			while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
				i++;
			w_str = i;
			split_index++;
		}
		i++;
	}
	return (split);
}
