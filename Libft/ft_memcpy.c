/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:24:55 by ralves-g          #+#    #+#             */
/*   Updated: 2021/12/06 17:12:33 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void	*restrict dst, const void *restrict src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		*((char *)(dst + i)) = *((char *)(src + i));
		i++;
	}
	return (dst);
}

/*int	main()
{
const char	src[40] = "ganda frase, não arranjo melhor";
char	dst[40];
const char	src2[40] = "ganda frase, não arranjo melhor";
char	dst2[40];

printf("%s\n", memcpy(dst, src, 15));
printf("%s\n", dst);
printf("%s\n", ft_memcpy(dst2, src2, 15));
printf("%s\n", dst2);
}*/
