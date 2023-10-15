/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:07:23 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/14 16:13:19 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>
//#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	d = dest;
	s = src;
	while (n--)
		d[n] = s[n];
	return (dest);
}

int	main(void)
{
	const char	*src = "123456789";
	char		dst[] = "abcde";
	char		*str;
	unsigned int	n;

	n = 1;
	printf("dst - %s\n", dst);
	printf("src - %s\n", src);
	
	str = ft_memmove(dst, src, n);
	printf("\nResultado ft_memmove - %s\n", str);

//	memcpy(dst, src, n);
//	printf("\nResultado memmove - %s\n", dst);
	return 0;
}
