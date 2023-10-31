/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:53:41 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/14 11:52:20 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	if (!little)
		return ((char *)big);
	i = 0;
	j = 0;
	while (i < len)
	{
		while (big[i] == little[j] && little[j] != '\0'
			&& big[i] != '\0')
			j++;
		i++;
	}
	if (little[j] == '\0')
		return ((char *)little);
	else
		return (0);
}
/*
int	main(void)
{
	const char	*largestring = "Foo Bar Baz";
	const char	*smallstring = "Bar";
	char		*ptr;
	size_t		n;

	n = 4;
	ptr = ft_strnstr(largestring, smallstring, n);
	printf("return value = %s\n", ptr);
	return (0);
}*/
