#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*s;

	s = malloc(size * count);
	if (!(s))
		return (NULL);
	ft_bzero(s, count * size);
	return (s);
}
