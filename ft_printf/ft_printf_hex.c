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

// Function to print one NUMBER in HEXADECIMAL FORMAT
int	ft_printf_hex(unsigned int n, const char s)
{
	unsigned long		len;
	char				*upper;
	char				*lower;

	len = 0;
	upper = "0123456789ABCDEF";
	lower = "0123456789abcdef";
	if (n >= 16)
	{
		len += ft_printf_hex(n / 16, s);
		len += ft_printf_hex(n % 16, s);
	}
	else
	{
		if (s == 'X')
			ft_printf_char(upper[n]);
		else
			ft_printf_char(lower[n]);
		++len;
	}
	return (len);
}
