/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 16:19:20 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/14 18:13:04 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	size;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	size = 0;
	while (s[start + size] != '\0' && size < len)
		size++;
	substr = (char *)malloc(sizeof(char) * (size + 1));
	if (!substr)
		return (0);
	ft_strlcpy(substr, s + start, size + 1);
	return (substr);
}
/*
int	main(void)
{
	char	str[] = "";
	int 		ini;
	int 		tamanho;

	ini = 0;
	tamanho = 1;
	printf("string: \t%s\n", str);
	printf("start: \t%i\n", ini);
	printf("length: \t%i\n", tamanho);
	printf("-----------------\n");
	printf("result: \t%s\n", ft_substr(str, ini, tamanho));

	return (0);
}*/
