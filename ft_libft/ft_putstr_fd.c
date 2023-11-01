/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:53:41 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/20 16:22:13 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	if (fd >= 0)
		write(fd, s, ft_strlen(s));
}
/*
int	main(void)
{
	int	funcao;
	char	*str;

	funcao = 1;
	str = "teste teste teste";
	ft_putstr_fd(str, funcao);
	return (0);
}*/
