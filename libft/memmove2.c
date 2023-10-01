#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	u;

	i = 0;
	p = (unsigned char *)src;
	u = (unsigned char)dest;
	if (n == 0)
		return (dest);
	if (src < dest && src + n > dest)
	{
		dest += n;
		src += n;
	}
	while (n > 0)
	{
		*u[i] = p[i];
		i--;
	}
	return ((void *)dest);
}
