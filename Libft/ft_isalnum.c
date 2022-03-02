/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:27:51 by ralves-g          #+#    #+#             */
/*   Updated: 2021/11/05 17:48:50 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int num)
{
	if (ft_isalpha(num) == 1 || ft_isdigit(num) == 1)
		return (1);
	return (0);
}

/*int main()
{
	int ascii;

	ascii = 0;
	while (ascii < 127)
	{
	printf("minha    %d\n", ft_isalnum(ascii));
	printf("c lib    %d\n", isalnum(ascii));
	printf("var      %c\n\n\n", ascii);
	ascii++;
	}
}*/
