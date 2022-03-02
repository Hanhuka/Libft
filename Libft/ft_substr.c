/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:48:17 by ralves-g          #+#    #+#             */
/*   Updated: 2021/11/02 15:49:54 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	ptr = malloc(len + 1);
	if (!ptr)
		return (0);
	if (start >= ft_strlen(s))
		return (ptr);
	while (len > 0)
	{
		ptr[i] = *(char *)(s + start + i);
		i++;
		len--;
	}
	ptr[i] = 0;
	return (ptr);
}

/*int main()
{
    char text[] = "abc";
    printf("%s\n",ft_substr(text, 3, 1));
}*/