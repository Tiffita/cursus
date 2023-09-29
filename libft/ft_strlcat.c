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

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	
	i = 0;
	while (dst[i] && i < size)
		i++;
	while (src[i - dst_len - 1] && i + 1 < size)
	{
		dst[i] = src[i - dst_len - 1];
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	return (dst_len + src_len);
}
