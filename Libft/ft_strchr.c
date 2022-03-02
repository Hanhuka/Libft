/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:01:41 by ralves-g          #+#    #+#             */
/*   Updated: 2021/11/02 15:59:49 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if (c == 0)
		return ((char *)s + i);
	return (NULL);
}

/*int main()
{
	char string[] = "tem um A aqui um B mais um A e depois tem outro A";
	char string2[] = "tem um A aqui um B mais um A e depois tem outro A";
	printf("%s\n", ft_strchr(string, '\0'));
	printf("%s\n", strchr(string, '\0'));
}*/