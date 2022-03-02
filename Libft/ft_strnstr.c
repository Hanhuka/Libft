/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:59:09 by ralves-g          #+#    #+#             */
/*   Updated: 2022/01/28 17:48:58 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

/*static char	*bruh(char *str, char *to_find, size_t i, size_t len)
{
	size_t		i2;
	const char	*p;

	i2 = 0;
	p = str + i;
	while (str[i] == to_find[i2] && i <= len)
	{	
		if (to_find[i2 + 1] == '\0')
			return ((char *) p);
		i++;
		i2++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	if (!haystack)
		return (0);
	while (haystack[i] && i < len - 1)
	{
		i2 = 0;
		if (!needle)
			return ((char *) haystack);
		if (haystack[i] == needle[i2] && i2 == 0
			&& bruh(haystack, needle, i, len) != 0)
			return (bruh(haystack, needle, i, len));
		i++;
	}
	return (NULL);
}*/

int checker(char *str, char *to_find, size_t i, size_t len)
{
	size_t		i2;
	int	p;

	i2 = 0;
	p = i;
	while (str[i] == to_find[i2] && i <= len)
	{	
		if (to_find[i2 + 1] == '\0')
			return (p);
		i++;
		i2++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	if (!haystack)
		return (0);
	while (haystack[i] && i < len - 1)
	{
		i2 = 0;
		if (!needle)
			return ((char *) haystack);
		if (haystack[i] == needle[i2] && i2 == 0
			&& checker((char *)haystack, (char *)needle, i, len))
			return ((char *)(haystack + checker((char *)haystack, (char *)needle, i, len)));
		i++;
	}
	return (NULL);
}

int main()
{
	printf("\n   Minha: %s\n", ft_strnstr("um dois tres quatro cinco", "a", 15));
	printf("Função C: %s\n\n", strnstr("um dois tres quatro cinco", "a", 15));
	
	printf("   Minha: %s\n", ft_strnstr("um dois tres quatro cinco", "z", 5));
	printf("Função C: %s\n\n", strnstr("um dois tres quatro cinco", "z", 5));
	
	printf("   Minha: %s\n", ft_strnstr("um tres quat quatro cinco", "quatr", 40));
	printf("Função C: %s\n\n", strnstr("um tres quat quatro cinco", "quatr", 40));
	
	printf("   Minha: %s\n", ft_strnstr("\0", "qu", 0));
	printf("Função C: %s\n\n", strnstr("\0", "qu", 0));

	printf("   Minha: %s\n", ft_strnstr("", "", 1));
	printf("Função C: %s\n\n", strnstr("", "", 1));
}
