/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 21:19:13 by lsilva-x          #+#    #+#             */
/*   Updated: 2024/09/04 21:41:06 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2);

int main(void)
{
	char *x = "Hello";
	char y[10];
	
	ft_strcpy(y, x);
	printf("copy x[hello] to y[10]: %s\n", y);
	return (0);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}