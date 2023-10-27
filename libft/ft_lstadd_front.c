/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:14:57 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/21 18:36:37 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*	Initially, both structs are disconnected.
	When the function runs the Struct New (link2)
	is linked to the link of the Lst (link1) that is NULL
	and Lst is linked to the New.

	step 1 - lst | "A" | null |
	step 1 - new | "x" | null |
	
	step 2 - new | "x" | null |
	step 3 - lst | "x" | &new |
		
*/
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
		new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*link1 = ft_lstnew("A");
	t_list	*link2 = ft_lstnew("B");
	t_list	*link3 = ft_lstnew("C");
	t_list	*new_link = ft_lstnew("new");
	link1->next = link2;
	link2->next = link3;
	printf("Before function\n");
	printf("link1 - \t%s - \t%p\n", link1->content, link1->next);
	printf("link2 - \t%s - \t%p\n", link2->content, link2->next);
	printf("link3 - \t%s - \t%p\n", link3->content, link3->next);
	printf("NEW - \t\t%s - \t%p\n", new_link->content, new_link->next);
	ft_lstadd_front(&link1, new_link);
	printf("After function\n");
	printf("link1 - \t%s - \t%p\n", link1->content, link1->next);
	printf("link2 - \t%s - \t%p\n", link2->content, link2->next);
	printf("link3 - \t%s - \t%p\n", link3->content, link3->next);
	printf("NEW - \t\t%s - \t%p\n", new_link->content, new_link->next);
	return (0);
}*/