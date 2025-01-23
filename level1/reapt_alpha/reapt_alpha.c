/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reapt_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 21:58:10 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/05 14:13:48 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
	int		letter;
	int		repeat;
	if(argc == 2)
	{
		while(*argv[1])
		{
			if(*argv[1] >= 'a' && *argv[1] <= 'z')
			{
				letter = *argv[1] - 'a';
			}
			else if(*argv[1] >= 'A' && *argv[1] <= 'Z')
			{
				letter = *argv[1] - 'A';
			}
			repeat = 0;
			while(repeat <= letter)
			{
				write(1, &*argv[1], 1);
				repeat++;
			}
			argv[1]++;
		}
		write(1, "\n", 1);
	}
	return (0);
}