/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 15:59:16 by ralves-g          #+#    #+#             */
/*   Updated: 2021/11/05 11:19:49 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*iter;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		iter = (*lst)->next;
		ft_lstdelone(*lst, (*del));
		*lst = iter;
	}
}
