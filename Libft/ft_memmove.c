/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 15:55:58 by ralves-g          #+#    #+#             */
/*   Updated: 2021/10/28 13:17:00 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ds;
	const char	*sr;
	char		*newdst;
	const char	*newsrc;

	ds = dst;
	sr = src;
	if (!dst && !src)
		return (0);
	if (dst < src)
		while (len--)
			*ds++ = *sr++;
	else
	{
		newdst = ds + (len - 1);
		newsrc = sr + (len - 1);
		while (len--)
			*newdst-- = *newsrc--;
	}
	return (dst);
}

/*int main()
{
	char	dst[] = "destino disto asdklasfhasf";
	char	src[] = "source :) auhsdalsdhasdkkaksdjkkasd";

	printf("%s\n", memmove(dst, src, 27));
	printf("%lu\n", strlen(dst));
	printf("%s\n", ft_memmove(dst, src, 27));
}*/
