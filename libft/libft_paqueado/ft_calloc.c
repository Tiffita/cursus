/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 16:28:43 by prmarott          #+#    #+#             */
/*   Updated: 2023/10/07 17:21:12 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*p;

	total_size = nmemb * size;
	p = malloc(total_size);
	if (p != NULL)
	{
		ft_memset(p, 0, total_size);
	}
	return (p);

}
