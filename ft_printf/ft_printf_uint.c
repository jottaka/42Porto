/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:08:58 by josfreit          #+#    #+#             */
/*   Updated: 2023/11/01 17:09:03 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Function to return the LENGTH of UNSGINED INT
int	ft_len_uint(unsigned int nbr)
{
	int	qt_char;

	qt_char = 0;
	while (nbr != 0)
	{
		qt_char++;
		nbr /= 10;
	}
	return (qt_char);
}

// Function to PUT the value of UNSGINED INT in a STRING
char	*ft_utoa(unsigned int nbr)
{
	int		len;
	char	*str;

	len = ft_len_uint(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	while (nbr != 0)
	{
		str[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

// Function to print one UNSGINED INTEGER NUMBER
int	ft_printf_uint(unsigned int nbr)
{
	int		ulen;
	char	*str;

	ulen = 0;
	if (nbr == 0)
		ulen += ft_printf_char('0');
	else
	{
		str = ft_utoa(nbr);
		ulen += ft_printf_string(str);
		free(str);
	}
	return (ulen);
}
