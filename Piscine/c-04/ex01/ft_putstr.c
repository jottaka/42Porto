/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:25:06 by josfreit          #+#    #+#             */
/*   Updated: 2023/09/05 15:13:00 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	write (1, str, c);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	c;

	c = 0;
	while (c < argc)
	{
		printf("Parametro %d: %s\n", c, argv[c]);
		c++;
	}
	ft_putstr(argv[1]);
	return (0);
}*/
