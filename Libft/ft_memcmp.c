/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:13:49 by ralves-g          #+#    #+#             */
/*   Updated: 2021/11/08 13:16:49 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (i < n - 1 && *(unsigned char *)(s1 + i)
	== *(unsigned char *)(s2 + i))
		i++;
	return ((*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i)));
}

/*int main()
{
	char	text1[] = "ganda texto crlh";
	char	text2[] = "ganda texto crlh";

	printf("%d\n", memcmp(text1, text2, 9));
	printf("%d\n", ft_memcmp(text1, text2, 9));
	printf("%d\n", memcmp("zyxbcdefgh", "abcdefgxyz", 0));
	printf("%d\n", ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));
}*/
