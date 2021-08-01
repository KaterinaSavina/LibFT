#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				n;
	unsigned char	*s2;

	s2 = (unsigned char *)s;
	n = ft_strlen((char *)s);
	while (n >= 0)
	{
		if (s2[n] == (unsigned char)c)
			return ((char *)s2 + n);
		n--;
	}
	return (NULL);
}
