/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:45:44 by josfreit          #+#    #+#             */
/*   Updated: 2023/09/12 13:12:09 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nmbr(int q, int r)
{
	char	a;
	char	b;

	a = q + '0';
	b = r + '0';
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	q;
	int	r;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			q = (a / 10);
			r = (a % 10);
			ft_print_nmbr(q, r);
			write(1, " ", 1);
			q = (b / 10);
			r = (b % 10);
			ft_print_nmbr(q, r);
			if (a < 98)
				write(1, ", ", 2);
			b++; 
		}
		a++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
