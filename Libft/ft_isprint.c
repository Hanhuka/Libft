/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 12:47:23 by ralves-g          #+#    #+#             */
/*   Updated: 2021/10/20 10:56:44 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int num)
{
	if (num >= 32 && num <= 126)
		return (1);
	return (0);
}

/*int main()
{
	int	bruh;

	bruh = 127;
	printf("%d\n", ft_isprint(bruh));
	printf("%d\n", isprint(bruh));
	printf("%c\n", bruh);
}*/
