/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 14:10:56 by ralves-g          #+#    #+#             */
/*   Updated: 2021/11/05 15:01:05 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_con;
	t_list	*new_lst;

	new_lst = 0;
	while (lst)
	{
		new_con = ft_lstnew(f(lst -> content));
		if (!new_con)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		ft_lstadd_back(&new_lst, new_con);
		lst = lst -> next;
	}
	return (new_lst);
}
