/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfreit <josfreit@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:14:57 by josfreit          #+#    #+#             */
/*   Updated: 2023/10/21 18:36:37 by josfreit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_clear_cont(t_list *lsta, void *content, void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;
	void	*cont;

	if (!lst || !f || !del)
		return (0);
	new_lst = 0;
	while (lst)
	{
		cont = f(lst->content);
		if (!cont)
			return (ft_clear_cont(new_lst, cont, del));
		temp = ft_lstnew(cont);
		if (!temp)
			return (ft_clear_cont(new_lst, cont, del));
		ft_lstadd_back(&new_lst, temp);
		lst = lst->next;
	}
	return (new_lst);
}

void	*ft_clear_cont(t_list *lsta, void *content, void (*del)(void *))
{
	if (content)
		del(content);
	ft_lstclear(&lsta, del);
	return (0);
}
