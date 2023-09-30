#include "libft.h"

char    *ft_strrchr(const char *str, int c)//hacia atras
{
    size_t  len;
    int     i;
    
    len = ft_strlen(str);
    i = len - 1;
    if (c == '\0')
        return ((char *)&str[len]);
    while (i >= 0)
    {
        if (((char *)str)[i] == (char)c)
        {
            return(char *)&str[i];
        }
        i--;
    }
    return NULL;
}