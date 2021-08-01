#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*a;
	const char	*b;

	if (!(src) && (!(dst)))
		return (NULL);
	i = 0;
	a = (char *)dst;
	b = (const char *)src;
	while (i < n)
	{
		a[i] = b[i];
		i ++;
	}
	return (dst = a);
}
