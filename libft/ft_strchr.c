#include "libft.h"

char    *ft_strchr(const char *s, int c)//hacia delante
{
    size_t  i;
    char    *str;
    
    str = (char *)s;
    i = 0;
    while (str[i] != '\0')
    {
        if (((char *)str)[i] == (char)c)//fijarme si c puede tratar valores + o -
            return((char *)&str[i]);//sino va unsigned con los char
        i++;
    }
    if (c == '\0')
        return ((char *)&str[i]);
    return NULL; 
}