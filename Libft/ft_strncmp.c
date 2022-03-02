/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 14:45:33 by ralves-g          #+#    #+#             */
/*   Updated: 2021/11/08 13:21:50 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n <= 0)
		return (0);
	while (i < n - 1 && *(s1 + i) == *(s2 + i)
		&& *(s1 + i) != '\0' && *(s2 + i) != '\0')
		i++;
	return ((*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i)));
}

/*int main()
{
char string[] = {"uma 12string com cenas que uma string tem"};
char string2[] = {"uma \0string com cenas que uma \0string tem"};

printf("%d\n", ft_strncmp(string, string2 , 5));
printf("%d\n", strncmp(string, string2, 5));
}*/