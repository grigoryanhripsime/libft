/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrigrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:47:35 by hrigrigo          #+#    #+#             */
/*   Updated: 2024/01/24 20:03:59 by hrigrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*llst;

	llst = 0;
	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		tmp = ft_lstnew(f(lst -> content));
		if (!tmp)
		{
			ft_lstclear(&llst, del);
			return (0);
		}
		ft_lstadd_back(&llst, tmp);
		lst = lst -> next;
	}
	return (llst);
}
