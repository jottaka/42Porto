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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	char			*ptr;

	ptr = (char *)src;
	i = 0;
	while (*dst && i < size)
	{
		dst++;
		i++;
	}
	if (i == size)
		return (i + ft_strlen(src));
	j = 0;
	while (ptr[j])
	{
		if (j < size - i - 1)
			*dst++ = ptr[j];
		j++;
	}
	*dst = '\0';
	return (j + i);
}
/*
int	main()
{
	char	destino[] = "destino com muito espaco";
	char	origem[] = "-origem";
	int	c = 4;

	printf("\ndestino antes = \t%s", destino);
	printf("\nft_strlcat: \t\t%zu\n", ft_strlcat(destino, origem, c));
	printf("\ndestino depois = \t%s", destino);
	return (0);
}*/
