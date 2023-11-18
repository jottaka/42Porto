/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:25:06 by josfreit          #+#    #+#             */
/*   Updated: 2023/09/05 14:59:04 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
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
	printf("%s tem %i caracteres\n", argv[1], ft_strlen(argv[1])); 	
	return (0);
}*/
