/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:25:06 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/14 19:00:42 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

char	*ft_strchr(const char *s, int c)
{
	char	*str;	

	str = (char *)s;
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (c == '\0')
		return (str);
	return (0);
}
/*
#include <string.h>

int	main ()
{
	const char str[] = "teste";
	const char ch = '\0';
	char *p;
	p = strchr(str, ch);
	printf("strchr - tring starting from %c is: \t%s", ch, p);
	p = ft_strchr(str, ch);
	printf("\nft_strchr - String starting from %c is: \t%s", ch, p);
	return 0;
}*/
