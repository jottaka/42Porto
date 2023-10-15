/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 09:59:30 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/05 18:43:47 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <stdlib.h>
#include <stdio.h>

int	main(int ac, char *av[])
{
	if (ac == 2)
		printf("%s\n", ft_strdup(&av[1][0]));
	return (0);
}*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(nmemb * size);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
