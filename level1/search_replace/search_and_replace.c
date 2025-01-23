/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:16:30 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/05 14:28:12 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str);

int main(int argc, char *argv[])
{
	int		i;

	i = 0;
	if(argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
	{
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

int ft_strlen(char *str)
{
	int		i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}