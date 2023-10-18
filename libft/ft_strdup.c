/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:24:30 by prmarott          #+#    #+#             */
/*   Updated: 2023/10/07 18:12:14 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*duplicate;
	size_t	i;

	len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	duplicate = (char *)malloc(len + 1);
	if (duplicate == NULL)
		return (NULL);
	i = 0;
	while (i <= len)
	{
		duplicate[i] = s[i];
		i++;
	}
	return (duplicate);
}
