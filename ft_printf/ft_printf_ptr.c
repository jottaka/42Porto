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

// Function to return the LENGTH of Pointer Address
static int	ft_len_ptr(unsigned long ptr_a)
{
	int	len;

	len = 0;
	while (ptr_a != 0)
	{
		ptr_a = ptr_a / 16;
		len++;
	}
	return (len);
}

// Function to PRINT the Pointer Address in HEX
int	ft_printf_ptr_hex(unsigned long ptr_a)
{
	if (ptr_a >= 16)
	{
		ft_printf_ptr_hex(ptr_a / 16);
		ft_printf_ptr_hex(ptr_a % 16);
	}
	else if (ptr_a <= 9)
		ft_printf_char(ptr_a + '0');
	else
		ft_printf_char((ptr_a - 10) + 'a');
	return (ft_len_ptr(ptr_a));
}

// Function to print a POINTER ADDRESS
// Return the quantity of digits of the ADDRESS in HEX
int	ft_printf_ptr(unsigned long ptr)
{
	int	len;

	if (ptr == 0)
		return (ft_printf_string("(nil)"));
	len = 0;
	len = ft_printf_string("0x");
	len += ft_printf_ptr_hex(ptr);
	return (len);
}
