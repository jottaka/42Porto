/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:25:06 by josfreit          #+#    #+#             */
/*   Updated: 2023/08/31 15:55:32 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}
/*
int	main(void)
{
	char	*text;
	int	c;
	int	ft_strlen(char	*str);

	text = "aqui tem 20 letras!!";
	ft_strlen(text);
	c = 0;
	printf("%d\n", c);
	c = ft_strlen(text);
	printf("%d\n", c); 	
	return (0);
}*/
