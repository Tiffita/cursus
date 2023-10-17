/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:27:46 by prmarott          #+#    #+#             */
/*   Updated: 2023/10/04 22:25:13 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	size_t			result;

	i = 0;
	result = 0;
	while ((i < n) && !result && (s1[i] != '\0') && (s2[i] != '\0'))
	{
		result = (unsigned char) s1[i] - (unsigned char) s2[i];
		i++;
	}
	if ((i < n) && !result && (s1[i] == '\0' || s2[i] == '\0'))
		result = (unsigned char) s1[i] - (unsigned char) s2[i];
	return (result);
}
