/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:52:04 by ralves-g          #+#    #+#             */
/*   Updated: 2021/10/19 15:34:43 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*int	main()
{
	int val;

	val	= 0;
	while (val < 300)
	{
	printf("minha    %d\n", ft_isascii(val));
	printf("c lib    %d\n", isascii(val));
	printf("char val %c\n\n\n", val);
	val++;
	}
}*/
