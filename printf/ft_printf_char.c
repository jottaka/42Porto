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
// incluir a bibliote libft ajustada com o ft_strlen

int	ft_printf_char(int c)
{
	write(1, &c, 1);

	return (1);
}

int	ft_printf_string(char *str)
{
	size_t	len;

	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}

int	t_printf_nbr(int nbr)
{
	char	*str_nbr;

	str_nbr = ft_itoa(nbr);
	return (ft_printf_string(str_nbr));
}

