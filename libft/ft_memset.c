/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:26:12 by prmarott          #+#    #+#             */
/*   Updated: 2023/09/28 19:26:12 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	u;

	p = (unsigned char *)s;
	u = (unsigned char)c;
	while (n > 0)
	{
		*p = u;
		p++;
		n--;
	}
	return (p);
}
