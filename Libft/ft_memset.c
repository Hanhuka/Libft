/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:05:33 by ralves-g          #+#    #+#             */
/*   Updated: 2021/10/20 14:12:31 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*chr;

	chr = b;
	i = 0;
	while (i < len)
	{		
		chr[i] = (char) c;
		i++;
	}
	return (b);
}

/*int main()
{
char frase[50];
strcpy(frase, "uma ganda frase");
char frase2[50];
strcpy(frase2, "uma ganda frase");

memset(frase, 'A', 3);
printf("%s\n", frase);

ft_memset(frase2, 'A', 3);
printf("%s\n", frase2);
}*/
