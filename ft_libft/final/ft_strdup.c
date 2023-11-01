/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:59:30 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/05 18:43:47 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	int		c;
	int		i;
	char	*dest;

	c = 0;
	while (s[c])
		c++;
	dest = (char *)malloc(sizeof(char) * (c + 1));
	if (dest == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (s[i])
		{
			dest[i] = s[i];
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
