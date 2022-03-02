/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:33:26 by ralves-g          #+#    #+#             */
/*   Updated: 2021/11/08 12:03:01 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (&s[i] != &*s && i >= 0)
	{
		if (s[i] == (char) c)
			break ;
		i--;
	}
	if (s[i] == *s && s[i] != c)
		return (NULL);
	if (c == '\0' || s[i] != '\0')
		return ((char *)s + i);
	return (NULL);
}

/*int main()
{
	char		str2[] = "bonjour";
	//char string[] = "tem um r aqui e outro rr x2";
    //printf("%d\n", ft_strlen(string));
	printf("%s\n", ft_strrchr(str2 + 2, 'b'));
	printf("%s\n", strrchr(str2 + 2, 'b'));
	printf("%s\n", ft_strrchr(str2, 'b'));
	printf("%s\n", strrchr(str2, 'b'));
}*/
