/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:25:06 by josfreit          #+#    #+#             */
/*   Updated: 2023/09/07 13:37:08 by josfreit         ###   ########.fr       */
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
	while (nptr[c] == 32)
		c++;
	if (nptr[c] == '-' || nptr[c] == '+')
	{
		if (nptr[c++] == '-')
			mult *= -1;
	}
	while (ft_isdigit(nptr[c]))
	{
		nb = (nptr[c] - '0') + (nb * 10);
		c++;
	}
	return (mult * nb);
}
