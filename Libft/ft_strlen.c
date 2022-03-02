/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:54:40 by ralves-g          #+#    #+#             */
/*   Updated: 2021/10/20 11:23:35 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <string.h>

size_t	ft_strlen(const char *word)
{
	size_t	i;

	i = 0;
	while (word[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main()
{
	char word[] = {"palavra mais outras\0 depois de null"};
	printf("%zu\n", ft_strlen(word));
	printf("%lu\n", strlen(word));
}*/
