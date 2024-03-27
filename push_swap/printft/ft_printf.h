/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 03:21:29 by prmarott          #+#    #+#             */
/*   Updated: 2023/11/29 20:28:07 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

// prototypes
int		ft_printf(const char *format, ...);
int		print_char(int c);
int		print_str(char *str);
int		print_digit(long n, int base, const char *found_base);
int		print_ptr(void *ptr);
int		ft_to_hex(unsigned long hex);

#endif
