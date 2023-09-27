#include "./libft.h"

void *memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = dest;
    const unsigned char *s = src;
    size_t i;

    i = 0;
    while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    
    return(dest);
}