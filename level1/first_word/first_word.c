/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:42:51 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/05 17:17:14 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	if(argc == 2)
	{
		while(argv[1][i] >= 1 && argv[1][i] <= 32)
			i++;
		while(argv[1][i+j] > 32)
			j++;
		write(1, &argv[1][i], j);
	}
	write(1, "\n", 1);
}