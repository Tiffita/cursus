/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/10/01 17:56:57 by prmarott          #+#    #+#             */
/*   Updated: 2023/10/01 17:56:57 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*p;

	len = (ft_strlen(s));
	p = (char *)s;
	while (len > 0)
	{
		if (p[len] == (char)c)
			return (&p[len]);
		len--;
	}
	if (!(p[len] == (char)c))
		return (0);
	return (&p[len]);
}
