/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:21:28 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/14 11:50:26 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = 0;
	while (*s)
	{
		if (*s == c)
			str = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (str);
}
/*
int	main(void)
{
	int	c = 'b';
	const char	*str = "bonjour";

	printf("Procurando '%c' em '%s'\n", c, str);
	printf("\nft_strstr: %s\n", ft_strrchr(str + 2, c));
	printf("strrchr: %s\n", strrchr(str + 2, c));
	return (0);
}*/
