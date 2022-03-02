/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:48:50 by ralves-g          #+#    #+#             */
/*   Updated: 2021/11/08 15:31:34 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	i2;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	i = dstlen;
	i2 = 0;
	if (dstlen < size - 1 && size > 0)
	{
		while (src[i2] && dstlen + i2 < size - 1)
		{
			dst[i] = src[i2];
			i++;
			i2++;
		}
		dst[i] = 0;
	}
	if (dstlen >= size)
		return (size + srclen);
	return (dstlen + srclen);
}

/*int main(void)
{
	char	src[] = "uma frase";
	char	dest[20] = "Isto é ";
	char	dest1[20] = "Isto é ";
	printf("%zu\n", ft_strlcat(dest, src, 20));
	printf("%s\n", dest);
	printf("%lu\n", strlcat(dest1, src, 20));
	printf("%s\n", dest1);
}*/
