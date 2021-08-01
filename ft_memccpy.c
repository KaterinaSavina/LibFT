#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*a;
	const unsigned char	*b;
	unsigned char		x;

	i = 0;
	a = (unsigned char *)dst;
	b = (const unsigned char *)src;
	x = (unsigned char)c;
	while (i < n)
	{
		a[i] = b[i];
		if (a[i] == x)
			return (dst + i + 1);
		i ++;
	}
	return (NULL);
}
