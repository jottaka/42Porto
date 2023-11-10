/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:21:28 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/20 13:24:38 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = 0;
	while (*s)
	{
		if (*s == (unsigned char)c)
			str = (char *)s;
		s++;
	}
	if ((unsigned char)c == 0)
		return ((char *)s);
	return (str);
}
/*
int	main(void)
{
	const char	*str = "teste";
	int	c = '\0';

	printf("Procurando '%c' em '%s'\n", c, str);

	if (strrchr(str, c) == ft_strrchr(str, c))
	{
		printf("strrchr: \t%s -- \t%p\n", strrchr(str, c), strrchr(str, c));
		printf("ft_strstr: \t%s -- \t%p\n", ft_strrchr(str, c), ft_strrchr(str, c));
	}
	return (0);
}*/