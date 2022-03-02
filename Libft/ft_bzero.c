/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 11:01:36 by ralves-g          #+#    #+#             */
/*   Updated: 2021/11/02 16:00:57 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*s2;

	s2 = (char *) s;
	i = 0;
	while (i < n)
	{
		s2[i] = '\0';
		i++;
	}	
}

/*int	main()
{
	char	frase[] = "";//"um dois tres quatro cinco";
	char	frase2[] = "";//"um dois tres quatro cinco";

	bzero(frase, 1);
	printf("%s\n", frase);
	ft_bzero(frase2, 1);
	printf("%s\n", frase2);
}*/
