/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:53:03 by ralves-g          #+#    #+#             */
/*   Updated: 2021/11/05 15:37:19 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*ptr;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, *(s1 + start)) != NULL)
		start++;
	while (end > start && ft_strrchr(set, *(s1 + end - 1)) != NULL)
		end--;
	ptr = ft_substr(s1, start, end - start);
	return (ptr);
}

/*int main()
{
	char c = '\0';
	char *text = "";
	char	*s1 = "  \t \t \n   \n\n\n\t";
	printf("%s\n", ft_strtrim(s1, " \n\t"));
}*/
