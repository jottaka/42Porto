/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:53:41 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/20 16:33:56 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
/*
void	func(unsigned int i, char *str)
{
	if (ft_isalpha(*str) && (i % 2 == 0))
		*str = ft_tolower(*str);
	else if (ft_isalpha(*str))
		*str = ft_toupper(*str);
}

int	main(void)
{
	char str[10] = "abcd";
	printf("Str: \t\t%s\n", str);
	ft_striteri(str, func);
	printf("Result: \t%s\n", (char *)str);
	return 0;
}*/
