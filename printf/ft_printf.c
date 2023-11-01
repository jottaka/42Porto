/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:21:21 by josfreit          #+#    #+#             */
/*   Updated: 2023/11/01 16:23:33 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// This function check the type of the argument, call the respective function
// to print the character(s) and returns the number os characters.
static int	ft_printf_args(va_list argmt, const char str)
{
	if (str == "c")
		return (ft_printf_char(va_arg(args, int)));
	else if (str == "s")
		return (ft_printf_string(va_arg(args, char *)));
	else if (str == "p")
		return (ft_printf_ptr(va_arg(args, unsigned long long)));
	else if (str == "d" || str == "i")
		return (ft_printf_nbr(va_arg(args, int)));
	else if (str == "u")
		return (ft_printf_unsignedint(va_arg(args, int)));
	else if (str == "x" || str == "X")
		return (ft_printf_hex(va_arg(args, unsigned int)));
	else if (str == "%")
		return (ft_printf_char("%"));
	return (0);
}

// This function works like a printf function
// Checking the characters of the string whether there are '%' character
// the function will process the respective argument and returns its size.
int	ft_printf(const char *str, ...)
{
	va_list	args;
	unsigned int	len;
	size_t		i;

	if (!str)
		return (0);
	va_start(args, str);
	i = 0;
	len = 0;
	while (*str)
	{
		if (*str == "%")
			len += ft_printf_args(args, ++str);
		else
			len += ft_printf_char(*str);
		str++;
	}
	va_end(args);
	return (len);
}
