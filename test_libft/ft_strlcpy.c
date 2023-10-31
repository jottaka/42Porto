/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:52:13 by josfreit          #+#    #+#             */
/*   Updated: 2023/09/13 16:09:22 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	while (!size)
		return (strlen(src));
	i = 0;
	while (src[i] && i < (size -1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (strlen(src));
}
/*
int	main()
{
	char	destino[] = "destination";
	char	origem[] = "origem";
	int	c = 3;

	printf("\norigem: \t\t%s", origem);
	printf("\ndestino: \t\t%s", destino);
	printf("\nsize: \t\t\t%i", c);
	printf("\nft_strlcpy: \t\t%zu\n", ft_strlcpy(destino, origem, c));
	printf("\ndestino depois: \t%s", destino);
	return (0);
}*/
