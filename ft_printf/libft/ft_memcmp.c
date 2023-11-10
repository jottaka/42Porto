/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:14:57 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/14 11:53:23 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	c;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	c = 0;
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (c < n)
	{
		if (ptr1[c] != ptr2[c])
			return (ptr1[c] - ptr2[c]);
		c++;
	}
	return (0);
}
/*
int	main(void)
{
	unsigned char	*s1 = "abc";
	unsigned char	*s2 = "abc";
	size_t		n;

	n = 7;
	printf("pointer 1: \t%i\n", s1);
	printf("pointer 2: \t%i\n", s2);
	printf("size_t: \t%i\n", n);
	printf("-------------------------\n");
	printf("memcmp: \t%i\n", memcmp(s1, s2, n));
	printf("ft_memcmp: \t%i\n", ft_memcmp(s1, s2, n));
	return (0);
}*/
