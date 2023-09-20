/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prmarott <prmarott@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:22:10 by prmarott          #+#    #+#             */
/*   Updated: 2023/09/20 12:36:10 by prmarott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>


typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

isalpha
isdigit
isalnum
isascii
isprint
strlen
memset
bzero
memcpy
memmove
strlcpy
strlcat
toupper
tolower
strchr
strrchr
strncmp
memchr
memcmp
strnstr
atoi

calloc
strdup

//* funciones adicionales
char *ft_substr(char const *s, unsigned int start,
size_t len)
char *ft_strjoin(char const *s1, char const *s2)
char *ft_strtrim(char const *s1, char const *set)
char **ft_split(char const *s, char c)
char *ft_itoa(int n)
char *ft_strmapi(char const *s, char (*f)(unsigned
int, char))
void ft_striteri(char *s, void (*f)(unsigned int,
char*))
void ft_putchar_fd(char c, int fd)
void ft_putstr_fd(char *s, int fd)
void ft_putendl_fd(char *s, int fd)
void ft_putnbr_fd(int n, int fd)
//* bonus

tatata

#endif