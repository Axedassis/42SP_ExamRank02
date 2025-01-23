/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 14:56:43 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/05 16:38:07 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	unsigned char	letter;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			letter = argv[1][i];
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				letter = argv[1][i] + 13;
				if (letter > 122)
					letter = (letter - 122) + 96;
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				letter = argv[1][i] + 13;
				if (letter > 90)
					letter = (letter - 90) + 64;
			}
			write(1, &letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}