/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 21:41:30 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/04 21:42:48 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{	
	ft_strlen("hello");
	return (0);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}