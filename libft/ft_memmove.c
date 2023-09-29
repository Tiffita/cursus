/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:26:27 by prmarott          #+#    #+#             */
/*   Updated: 2023/09/28 19:26:27 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{   
    size_t  i;

    i = 0;
    if (n == 0)
        return(dest);
    if (dest < src && src + n > dest)
    {
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    else
    {
        i = n - 1;
        while (i >= 0)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i--;
        }
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
    }
return(dest);
}

