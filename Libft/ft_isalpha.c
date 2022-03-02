/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 11:41:07 by ralves-g          #+#    #+#             */
/*   Updated: 2021/10/18 12:22:36 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int num);

int	ft_isalpha(int num)
{
	if ((num >= 'A' && num <= 'Z') || (num >= 'a' && num <= 'z'))
		return (1);
	return (0);
}

/*int main()
{
	int bruh;

	bruh = '9';
	printf("%d\n", ft_isalpha(bruh));
	printf("%d\n", isalpha(bruh));
}*/
