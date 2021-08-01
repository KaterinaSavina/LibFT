#include "libft.h"

size_t	ft_strlcat(char *s1, const char *s2, size_t n)
{
	size_t	len;
	char	*cur;
	char	*read;

	cur = (char *)ft_memchr(s1, '\0', n);
	if (!cur)
		return (n + ft_strlen(s2));
	read = (char *)s2;
	len = (size_t)(cur - s1) + ft_strlen(s2);
	while ((size_t)(cur - s1) < n - 1 && *read != '\0')
	{
		*cur = *read;
		cur++;
		read++;
	}
	*cur = '\0';
	return (len);
}
