/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:25:06 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/20 16:22:50 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	c;
	int	nb;
	int	mult;

	nb = 0;
	c = 0;
	mult = 1;
	while (nptr[c] == '\t' || nptr[c] == '\r' || nptr[c] == ' '
		|| nptr[c] == '\f' || nptr[c] == '\v' || nptr[c] == '\n')
		c++;
	if (nptr[c] == '-' || nptr[c] == '+')
	{
		if (nptr[c] == '-')
			mult = -1;
		c++;
	}
	while (ft_isdigit(nptr[c]))
	{
		nb = (nptr[c] - '0') + (nb * 10);
		c++;
	}
	return (mult * nb);
}
/*
int	main(void)
{
	char	*s = "--42+5";

	printf("char: \t%s\n", s);
	printf("int: \t%i\n", ft_atoi(s));
	printf("int: \t%i\n", atoi(s));
	return (0);
}*/
