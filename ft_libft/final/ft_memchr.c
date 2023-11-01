/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:07:23 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/12 19:03:08 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		if (*ptr == (unsigned char)c)
			return ((void *)ptr);
		ptr++;
		n--;
	}
	return (0);
}
/*
int	main(void)
{
	const int	src[7] = {-49, 49, 1, -1, 0, -2, 2};
	int	c;
	size_t	n;
	char	*str;

	printf("src - \t\t\t%s", src);
	c = -1;
	printf("\nvalor procurado - \t%c", c);
	n = 7;
	printf("\nlimite - \t\t%zu", n);
	str = (char *)memchr(src, c, n);
	printf("\nresultado memchr - \t%s", str);

	printf("\n\n----------\n");
	printf("\nsrc - \t\t\t%s", src);
	c = -1;
	printf("\nvalor procurado - \t%c", c);
	n = 7;
	printf("\nlimite - \t\t%zu", n);
	str = (char *)ft_memchr(src, c, n);
	printf("\nresultado ft_memchr- \t%s", str);

	return 0;
}*/
