/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:25:06 by josfreit          #+#    #+#             */
/*   Updated: 2023/09/03 16:18:51 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] <= 31 || str[c] == 127)
			return (0);
		else
			c++;
	}
	return (1);
}
/*
int	main(void)
{
	char	*a = "ol\tam\0undo";
	char	*b = "HELLO";

	printf("%i\n", ft_str_is_printable(a));
	printf("%i\n", ft_str_is_printable(b));
	return (0);
}*/
