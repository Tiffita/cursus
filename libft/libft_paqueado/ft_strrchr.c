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

char	*ft_strrchr(const char *str, int c)
{
	size_t	len;
	int		i;

	len = ft_strlen(str);
	i = len - 1;
	if (c == '\0')
		return ((char *)&str[len]);
	while (i >= 0)
	{
		if (((char *)str)[i] == (char)c)
		{
			return ((char *)&str[i]);
		}
		i--;
	}
	return (NULL);
}
