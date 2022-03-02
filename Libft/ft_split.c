/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralves-g <ralves-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:29:52 by ralves-g          #+#    #+#             */
/*   Updated: 2021/11/08 15:31:01 by ralves-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

static int	split_cuts(char const *s, char c)
{
	size_t	end;
	char	*str;
	size_t	cuts;

	end = 0;
	cuts = 0;
	str = (char *)s;
	while (end <= ft_strlen(s))
	{
		while (!(str[end] != c && (str[end + 1] == c || str[end + 1] == '\0')))
			end++;
		cuts++;
		end++;
	}
	return (cuts);
}

static char	**split_spliter(char const *s, char c, char **ptr)
{
	int		i;
	size_t	i2;
	int		i3;

	i = -1;
	i2 = 0;
	i3 = 0;
	while (i2 < ft_strlen(s) + 1)
	{
		if (s[i2] != c && i < 0)
			i = i2;
		else if ((s[i2] == c || s[i2] == '\0') && i >= 0)
		{
			ptr[i3++] = word_dup(s, i, i2);
			i = -1;
		}
		i2++;
		ptr[i3] = 0;
	}
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (0);
	ptr = (char **)malloc(sizeof(char *) * (split_cuts(s, c)));
	if (!ptr)
		return (0);
	return (split_spliter(s, c, ptr));
}

/*int main()
{
	int i;
	char *text = "      split       this for   me  !       ";
	char sep = ' ';
	char **split;

	i = 0;
	split = ft_split(text, sep);

	while (i < split_len(text, sep))
	{
		//for (int j = 0; j < 10; j++) printf("%c\n", mat[i][j]);
		printf("result [%d] ---> %s\n",i, split[i]);
		i++;
	}
	return (0);
}*/
