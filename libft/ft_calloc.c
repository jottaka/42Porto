/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:59:30 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/20 16:23:04 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
/*
int	main(int ac, char *av[])
{
	if (ac == 2)
		printf("%s\n", ft_strdup(&av[1][0]));
	return (0);
}*/
