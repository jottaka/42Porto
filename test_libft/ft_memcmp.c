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

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(int argc, char *argv[])
{
	int	c;
	size_t	n;

	c = 1;
	while (c < argc - 1)
	{
		printf("Parametro %d: \t%s\n", c, argv[c]);
		c++;
	}
	n = atoi(argv[3]);
	printf("memcmp: \t%i\n", memcmp(argv[1], argv[2], n));
	printf("ft_memcmp: \t%i\n", ft_memcmp(argv[1], argv[2], n));
	return (0);
}
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	c;
	const char		*ptr1;
	const char		*ptr2;

	ptr1 = s1;
	ptr2 = s2;
	c = 0;
	while ((ptr1[c] == ptr2[c]) && (ptr1[c] != '\0') && (ptr2[c] != '\0')
		&& c < (n - 1))
		c++;
	return (ptr1[c] - ptr2[c]);
}
