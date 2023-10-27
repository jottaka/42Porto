/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:15:28 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/20 11:53:05 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	c;
	unsigned char	*str1;
	unsigned char	*str2;

	c = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (str1[c] != str2[c] || str1[c] == 0 || str2[c] == 0)
			return (str1[c] - str2[c]);
		c++;
	}
	return (0);
}
/*
int	main(void)
{
	const char	*s1 = "test\200";
	const char	*s2 = "test\0";
	size_t		c;

	c = 6;
	printf("string 1: \t%s\n", s1);
	printf("string 2: \t%s\n", s2);
	printf("size: \t\t%li\n", c);
	printf("---------------------\n");
	printf("strncmp: \t%i\n", strncmp(s1, s2, c));
	printf("ft_strncmp: \t%i\n", ft_strncmp(s1, s2, c));
	return (0);
}*/
