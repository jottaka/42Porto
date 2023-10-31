/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:07:23 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/14 16:13:19 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*src = "123456789";
	char		dst[] = "abcde";
	char		*str;
	unsigned int	n;

	n = 3;
	printf("dst - %s\n", dst);
	printf("src - %s\n", src);
	
	str = ft_memmove(dst, src, n);
	printf("\nResultado ft_memmove - %s\n", str);

//	memcpy(dst, src, n);
//	printf("\nResultado memmove - %s\n", dst);
	return 0;
}
