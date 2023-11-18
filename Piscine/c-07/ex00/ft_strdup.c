/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:59:30 by josfreit          #+#    #+#             */
/*   Updated: 2023/09/13 18:51:50 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		c;
	int		i;
	char	*dest;

	c = 0;
	while (src[c])
		c++;
	dest = (char *)malloc(sizeof(char) * (c + 1));
	if (dest == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(int ac, char *av[])
{
	if (ac == 2)
		printf("%s\n", ft_strdup(&av[1][0]));
	return (0);
}*/
