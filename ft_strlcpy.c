#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		x;

	if (!src)
		return (0);
	i = 0;
	x = ft_strlen(src);
	if (!dst)
		return (x);
	if (dstsize == 0)
		return (x);
	dstsize--;
	while ((dstsize > 0) && (src[i] != '\0') && (i < dstsize))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (x);
}
