/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:15:28 by josfreit          #+#    #+#             */
/*   Updated: 2023/09/05 10:27:00 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	if (n == 0)
		return (0);
	else
		c = 1;
	while ((s1[c - 1] == s2[c - 1]) && (s1[c - 1] != '\0') 
		&& (s2[c - 1] != '\0') && (c < n))
		c++;
	return (s1[c - 1] - s2[c - 1]);
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char *argv[])
{
	int	c;
	int	size = atoi(argv[3]);

	c = 0;
	while (c < argc)
	{
		printf("Parametro %d: %s\n", c, argv[c]);
		c++;
	}
	printf("ft_strNcmp: %i\n", ft_strncmp(argv[1], argv[2], size));
	printf("strNcmp: %i\n", strncmp(argv[1], argv[2], size));
	return (0);
}*/
