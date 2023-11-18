/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:25:06 by josfreit          #+#    #+#             */
/*   Updated: 2023/09/03 16:17:49 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (str[c] >= 'a' && str[c] <= 'z')
			c++;
		else if (str[c] >= 'A' & str[c] <= 'Z')
			c++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	char	*s = "Port42o";
	char	*d = "aBZAksz";

	printf("%i\n", ft_str_is_alpha(s));
	printf("%i\n", ft_str_is_alpha(d));
	return (0);
}*/
