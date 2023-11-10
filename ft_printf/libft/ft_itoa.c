/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:25:06 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/20 16:23:47 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_char(int n)
{
	int	c;

	c = 0;
	if (n <= 0)
		c++;
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

static void	ft_fill_itoa(char *s, int nr, int len)
{
	if (nr < 0)
	{
		s[0] = '-';
		if (nr == -2147483648)
		{
			s[1] = '2';
			nr = 147483648;
		}
		else
			nr *= -1;
	}
	while (nr != 0)
	{
		s[len] = (nr % 10) + '0';
		nr /= 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;

	size = ft_count_char(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	if (n == 0)
		str[0] = '0';
	else
		ft_fill_itoa(str, n, size - 1);
	str[size] = '\0';
	return (str);
}
/*
int	main(void)
{
	int	a = -2147483648;
	int	b = 2147483647;
	int	c = 0;
	int	d = 42;

	printf("int %i \t - string %s\n", a, ft_itoa(a));
	printf("int %i \t\t - string %s\n", b, ft_itoa(b));
	printf("int %i \t\t - string %s\n", c, ft_itoa(c));
	printf("int %i \t\t - string %s\n", d, ft_itoa(d));
	return (0);
}*/
