/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 13:54:19 by ralves-g          #+#    #+#             */
/*   Updated: 2021/10/20 14:13:13 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(char *)(s + i) == (char)c)
			return ((void *)s + i);
		i++;
	}
	return ((void *) '\0');
}

/*int main()
{
	char text[] = "ganda texto maltinha!!";
	
	printf("%s\n", memchr(text, 't', 9));
	printf("%s\n", ft_memchr(text, 't', 9));
}*/
