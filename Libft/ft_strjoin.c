/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 12:29:34 by ralves-g          #+#    #+#             */
/*   Updated: 2021/11/08 15:31:25 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static char	*joiner(char const *s1, char const *s2, int size1, int size2)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc(size1 + size2);
	if (!ptr)
		return (0);
	i = 0;
	while (i < size1)
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < size2)
	{
		ptr[size1 + i] = s2[i];
		i++;
	}
	ptr[size1 + i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size1;
	int		size2;

	if (!s1 && s2)
		return ((char *)s2);
	if (s1 && !s2)
		return ((char *)s1);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	return (joiner(s1, s2, size1, size2));
}

/*int main()
{
//	char    text1[] = "começa aqui ";
//	char    text2[] = "e acaba aqui!";
//	printf("%s", ft_strjoin(text1, text2));

	char	*s1 = "my favorite animal is";
	char	*s2 = " ";
	char	*s3 = "the nyancat";
	char	*tmp = ft_strjoin(s1, s2);
	char	*res = ft_strjoin(tmp, s3);
	printf("res = %s\n", res);
}*/
