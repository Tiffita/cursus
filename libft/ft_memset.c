#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *p = s;
    unsigned char u = c;

    while (n > 0)
    {
        *p = u;
        p++;
        n--;
    }
    return s;
}