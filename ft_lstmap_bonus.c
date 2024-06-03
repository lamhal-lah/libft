/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamhal <lamhal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:16:22 by lamhal            #+#    #+#             */
/*   Updated: 2023/11/24 10:26:23 by lamhal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	void	*content;
	t_list	*node;
	t_list	*list;

	list = NULL;
	tmp = lst;
	if (!lst || !f || !del)
		return (NULL);
	while (tmp)
	{
		content = f(tmp -> content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		tmp = tmp -> next;
	}
	return (list);
}
