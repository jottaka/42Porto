/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:25:06 by josfreit          #+#    #+#             */
/*   Updated: 2023/09/03 16:18:04 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= '0' && str[c] <= '9')
			c++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*a = "4200";
	char	*b = "004o4";

	printf("%i\n", ft_str_is_numeric(a));
	printf("%i\n", ft_str_is_numeric(b));
	return (0);
}*/
