#include "libft.h"

char	*ft_strnstr(const char *h, const char *need, size_t len)
{
	size_t	i_h;
	size_t	y;

	y = 0;
	i_h = 0;
	if ((!h && need[y] == '\0') || (!h && len == 0))
		return (NULL);
	if (need[y] == '\0')
		return ((char *)h + i_h);
	while ((h[i_h] != 0) && (i_h < len))
	{
		while ((h[i_h + y] == need[y]) && (need[y] != '\0') && ((i_h + y) < len))
			y = y + 1;
		if (need[y] == '\0')
			return ((char *)h + i_h);
		y = 0;
		i_h = i_h + 1;
	}
	return (0);
}
