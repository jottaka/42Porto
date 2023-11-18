/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:07:23 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/12 19:06:42 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <string.h>
#include <stdio.h>
#include <stdlib.h>
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (dest);
	d = dest;
	s = src;
	while (n--)
		*d++ = *s++;
	return (dest);
}
/*
int	main(void)
{
	const char	*src = "123";
	char		dst[] = "abcde";
	char		*str;
	unsigned int	n;

	n = 20;
	printf("dst - %s\n", dst);
	printf("src - %s\n", src);
	
	str = ft_memcpy(dst + 2, src, n);
	printf("\nResultado ft_memcpy - %s\n", str);

//	memcpy(dst, src, n);
//	printf("\nResultado memcpy - %s\n", dst);
	return 0;
}*/
