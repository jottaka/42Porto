/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 10:53:41 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/12 19:07:41 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
	{
		*ptr = (char)c;
		ptr++;
	}
	return (s);
}
/*
int main()
{
	char str[20] = "abcdefghijklmnopqrst";
	
	printf("\nBefore memset(): %s\n", str);
  
	// Fill 4 characters starting from str[15] with '.'
	memset(str + 15, '.', 4*sizeof(char));
	printf("\nAfter memset(): %s\n", str);

	// Fill 2 characters starting from str[5] with '-'
	ft_memset(str + 5, '-', 2*sizeof(char));
	printf("\nAfter ft_memset(): %s\n", str);

	return 0;
}
*/