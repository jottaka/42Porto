/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:14:57 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/21 18:36:37 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	In libft.h there are a Struct s_lst with variable void *content and
	named 't_list'

	The '->' (arrow operator) is used for Pointers to Structs.
	Its purpose is access the member variables of the Struct 
*/
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (t_list *)malloc(sizeof(t_list));
	if (!lst)
		return (0);
	lst->content = content;
	lst->next = 0;
	return (lst);
}
/*
int	main(void)
{
	char	*str;

	t_list	*link_lst;
	str = (char *)malloc(4*sizeof(char));
	str = "ABC";
	link_lst = ft_lstnew((void *)str);
	printf("%s\n", (char *)link_lst->content);
	printf("%p\n", link_lst->next);	
}*/