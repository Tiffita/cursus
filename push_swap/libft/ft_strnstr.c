/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:15:59 by prmarott          #+#    #+#             */
/*   Updated: 2023/10/05 17:13:52 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t	sub;
	size_t	i;

	sub = ft_strlen(little);
	i = 0;
	if (sub == 0)
		return ((char *)big);
	while (big[i] != '\0' && i + sub <= len)
	{
		if (0 == ft_strncmp(big + i, little, sub))
			return (((char *)big + i));
		i++;
	}
	return (NULL);
}
