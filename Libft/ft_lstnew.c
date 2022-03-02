/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 12:40:46 by ralves-g          #+#    #+#             */
/*   Updated: 2021/10/27 14:55:00 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*linker;

	linker = (t_list *)malloc(sizeof(*linker));
	if (linker == NULL)
		return (0);
	linker -> content = content;
	linker -> next = NULL;
	return (linker);
}
