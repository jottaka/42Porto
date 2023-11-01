/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:52:13 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/20 16:25:37 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*nstr;
	int		ini;
	int		last;

	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	last = ft_strlen(s1) - 1;
	ini = 0;
	while (s1[ini] && ft_strchr(set, s1[ini]))
		ini++;
	while (s1[last] && ft_strchr(set, s1[last]))
		last--;
	nstr = ft_substr(s1, ini, (last - ini + 1));
	return (nstr);
}
/*
int	main(void)
{
	char	str[] = " lorem ipsum dolor sit amet";
	char	trim[] = "l ";

	printf("\nString\t\t= %s", str);
	printf("\nSet to trim\t= %s", trim);
	printf("\nft_strtrim\t= %s\n", ft_strtrim(str, trim));
	return (0);
}*/
