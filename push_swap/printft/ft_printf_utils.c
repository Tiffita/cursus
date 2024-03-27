/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 19:19:29 by prmarott          #+#    #+#             */
/*   Updated: 2023/12/02 19:38:58 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int c)
{
	return (write(1, &c, 1));
}

int	print_str(char *str)
{
	int	count;

	count = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (*str)
		count += write(1, str++, 1);
	return (count);
}
//para los demas, +1 para el -, -n convertirlo en + ya impreso el -

int	print_digit(long n, int base, const char *found_base)
{
	int		count;

	if (n < 0)
	{
		write(1, "-", 1);
		return (print_digit(-n, base, found_base) + 1);
	}
	if (n < base)
		return (print_char(found_base[n]));
	else
	{
		count = print_digit(n / base, base, found_base);
		return (count + print_digit(n % base, base, found_base));
	}
}
// generar cadena y dar la long para > o < que 16/15 y hace recursiva

int	ft_to_hex(unsigned long hex)
{
	int	len;

	len = 0;
	if (hex < 16)
	{
		if (hex < 10)
			len += print_char(hex + 48);
		else
			len += print_char(hex + 87);
	}
	if (hex > 15)
	{
		len += ft_to_hex(hex / 16);
		len += ft_to_hex(hex % 16);
	}
	return (len);
}
//* en hexa, 0x y luego llama arriba para el hex del *

int	print_ptr(void *ptr)
{
	int	len;

	len = 0;
	len += print_str("0x");
	len += ft_to_hex((unsigned long)ptr);
	return (len);
}
