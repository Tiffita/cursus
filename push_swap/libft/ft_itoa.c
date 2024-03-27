/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 18:01:49 by prmarott          #+#    #+#             */
/*   Updated: 2023/10/10 19:32:24 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_len(long nb)
{
	int	i;

	i = 1;
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long		nbr;
	char		*p;
	int			len;

	nbr = (long)n;
	len = int_len(nbr);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (0);
	p[len] = '\0';
	if (nbr == 0)
		p[0] = '0';
	if (nbr < 0)
	{
		p[0] = '-';
		nbr = -nbr;
	}
	while (nbr >= 10)
	{
		p[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (nbr > 0)
		p[--len] = nbr + '0';
	return (p);
}
