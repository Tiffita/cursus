/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:27:46 by prmarott          #+#    #+#             */
/*   Updated: 2023/09/28 19:33:21 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	size_t			j;

	i = 0;
	j = 0;
	while ((i < n) && !j && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		j = (unsigned char) s1[i] - (unsigned char) s2[i];
		i++;
	}
	if ((i < n) && !j && (s1[i] == '\0' || s2[i] == '\0'))
		j = (unsigned char) s1[i] - (unsigned char) s2[i];
	return (j);
}
