/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 18:57:02 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/05 20:10:38 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str);

int main(int argc, char *argv[])
{
	int		i;

	i = ft_strlen(argv[1]);
	if(argc == 2)
	{
		while(i > 0)
		{
			write(1, &argv[1][i-1], 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}

int ft_strlen(char *str)
{
	int		i;
	
	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}