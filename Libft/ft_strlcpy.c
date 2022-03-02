/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:30:34 by ralves-g          #+#    #+#             */
/*   Updated: 2021/10/18 15:45:25 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *restrict dst, char *restrict src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	counter;

	i = 0;
	counter = 0;
	while (src[counter] != '\0')
		counter++;
	if (dstsize != '\0')
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (counter);
}

/*int main()
{
	char dst[] = {"uma frase com palavras"};
	char src[] = {"yh esta frase é um pouco maior"};
	char dst2[] = {"uma frase com palavras"};
	char src2[] = {"yh esta frase é um pouco maior"};

	printf("%zu\n", ft_strlcpy(dst, src, 20));
	printf("%s\n", dst);
	printf("%lu\n", strlcpy(dst2, src2, 20));
	printf("%s\n", dst2);
}*/