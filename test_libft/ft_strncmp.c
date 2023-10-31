/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:15:28 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/14 19:01:32 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	c;

	c = 1;
	if (n == 0)
		return (0);
	while ((s1[c] == s2[c]) && (s1[c] != '\0')
		&& (s2[c] != '\0') && (c < n))
		c++;
	return (s1[c] - s2[c]);
}
/*
int	main(void)
{
	const char *s1 = "abcdef";
	const char *s2 = "abc\375xx";
	size_t	c;

	c = 5;
	printf("string 1: \t%s\n", s1);
	printf("string 2: \t%s\n", s2);
	printf("size: \t\t%li\n", c);
	printf("---------------------\n");
	printf("strncmp: \t%i\n", strncmp(s1, s2, c));
	printf("ft_strncmp: \t%i\n", strncmp(s1, s2, c));
	return (0);
}*/
