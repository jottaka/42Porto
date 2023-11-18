/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:17:06 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/20 16:26:03 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

// PRINTF function
int	ft_printf(const char *str, ...);
// PRINTF arguments
int	ft_printf_char(int c);
int	ft_printf_string(char *str);
int	ft_printf_nbr(int nbr);
int	ft_printf_uint(unsigned int nbr);
int	ft_printf_hex(unsigned int n, const char s);
int	ft_printf_ptr(unsigned long ptr);

#endif
