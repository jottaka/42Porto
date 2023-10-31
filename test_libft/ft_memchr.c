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

/*#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	const char	*src = "Hello World, Im studying 42.";
	int	c;
	size_t	n;
	char	*str;

	printf("src - \t\t\t%s", src);
	c = 'y';
	printf("\nvalor procurado - \t%c", c);
	n = strlen(src);
	printf("\nlimite - \t\t%zu", n);
	str = (char *)memchr(src, c, n);
	printf("\nresultado memchr - \t%s", str);

	printf("\n\n----------\n");
	printf("\nsrc - \t\t\t%s", src);
	c = 'I';
	printf("\nvalor procurado - \t%c", c);
	n = 13;
	printf("\nlimite - \t\t%zu", n);
	str = (char *)ft_memchr(src, c, n);
	printf("\nresultado ft_memchr- \t%s", str);

	return 0;
}
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (ptr[i] != '\0' && i <= n)
	{
		if (ptr[i] == c)
			return (&ptr[i]);
		i++;
	}
	return (0);
}
