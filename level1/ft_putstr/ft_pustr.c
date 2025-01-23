/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pustr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:32:36 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/05 17:37:15 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int main(void)
{
	char x[] = "Hello";
	ft_putstr(x);
	return (0);
}

void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, &str, 1);
		str++;
	}
}