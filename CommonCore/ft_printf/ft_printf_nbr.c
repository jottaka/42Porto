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
#include "libft/libft.h"

// Function to print a NUMBER
int	ft_printf_nbr(int nbr)
{
	char	*str_nbr;
	size_t	len;

	str_nbr = ft_itoa(nbr);
	ft_printf_string(str_nbr);
	len = ft_strlen(str_nbr);
	free(str_nbr);
	return (len);
}
