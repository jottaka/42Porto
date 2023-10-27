/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:14:57 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/21 18:36:37 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp_lst;

	if (!lst)
		return (0);
	temp_lst = lst;
	while (temp_lst->next)
		temp_lst = temp_lst->next;
	return (temp_lst);
}
/*
int	main(void)
{
	t_list	*link1 = ft_lstnew("ABC");
	t_list	*link2 = ft_lstnew("DEF");
	t_list	*link3 = ft_lstnew("GHI");
	link1->next = link2;
	link2->next = link3;	
	printf("List last -> content = \t%s\n", ft_lstlast(link1)->content);
	return (0);
}*/