/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:25:51 by prmarott          #+#    #+#             */
/*   Updated: 2023/09/28 19:25:51 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	while (src[i] != '/0' && ((dst_len + i + 1) < size))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len < size -1)
	{
		dst[dst_len] = '\0';
		return (dst_len + src_len);
	}
	return (size + src_len);
}
