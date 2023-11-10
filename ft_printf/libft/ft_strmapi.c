/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:14:57 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/21 18:36:37 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	
	Applies the function ’f’ to each character of the
	string ’s’, and passing its index as first argument
	to create a new string (with malloc(3)) resulting
	from successive applications of ’f’.

	Executa a funcao 'f' para cada caracter da string 's',
	e define o seu indice como 1o argumento para criar nova string (malloc(3))
	resultante de aplicacoes sucessivas de 'f'.
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		len;

	if (!s)
		return (0);
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	func(unsigned int i, char q)
{
	if (ft_isalpha(q) && i % 2 == 0)
		q = ft_toupper(q);
	else if (ft_isalpha(q))
		q = ft_tolower(q);
	return (q);
}

int	main(void)
{
	char str[10] = "abcd";
	printf("Str: \t\t%s\n", str);
	char *result = ft_strmapi(str, func);
	printf("Result: \t%s\n", result);
	return 0;
}*/
