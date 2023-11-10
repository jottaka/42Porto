/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:53:41 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/20 16:22:56 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		((char *)s)[n] = '\0';
}
/*
int	main()
{
	char str[20] = "abcdefghijklmnopqrst";
	
	printf("\nBefore memset(): %s\n", str);
  
	// Fill 3 characters starting from str[15] with '0'
	bzero(str + 15, 3*sizeof(char));
	printf("\nAfter bzero(): %s\n", str);

	// Fill 6 characters starting from str[3] with '0'
	ft_bzero(str + 3, 6*sizeof(char));
	printf("\nAfter ft_bzero(): %s\n", str);

	return (0);
}
*/
