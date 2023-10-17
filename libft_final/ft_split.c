/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:03:44 by prmarott          #+#    #+#             */
/*   Updated: 2023/10/10 00:11:24 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	in_word;

	words = 0;
	in_word = 0;
	while (*s)
	{
		if (!in_word && *s != c)
		{
			in_word = 1;
			words++;
		}
		else if (in_word && *s == c)
			in_word = 0;
		s++;
	}
	return (words);
}

void	free_all(char **array)
{
	if (array == NULL)
		return ;
	while (*array)
	{
		free(*array);
		array++;
	}
	free(array);
}

static char	*copy_word(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		++len;
	return (ft_substr(s, 0, len));
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		word_count;
	int		i;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	res = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			++s;
		res[i] = copy_word(s, c);
		if (!res[i])
			return (free_all(res), NULL);
		s += ft_strlen(res[i]);
		++i;
	}
	res[word_count] = NULL;
	return (res);
}
