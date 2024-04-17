/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 17:56:13 by prmarott          #+#    #+#             */
/*   Updated: 2023/10/01 17:56:13 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	cat;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len < size)
		cat = (dst_len + src_len);
	else
		cat = (src_len + size);
	while (*src && (dst_len + 1) < size)
	{
		dst[dst_len] = *src;
		dst_len++;
		src++;
	}
	if (dst_len < size)
		dst[dst_len] = '\0';
	return (cat);
}
