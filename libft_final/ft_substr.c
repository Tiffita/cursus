/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:54:09 by prmarott          #+#    #+#             */
/*   Updated: 2023/10/14 05:57:02 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	size_t	sub_len;
	char	*substring;

	i = 0;
	s_len = 0;
	sub_len = 0;
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	if (len < (s_len - start))
		sub_len = len;
	else
		sub_len = s_len - start;
	substring = malloc(sizeof(char) * (sub_len + 1));
	if (substring == NULL)
		return (NULL);
	while (i < sub_len && s[start + i] != '\0')
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
