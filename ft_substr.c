#include "libft.h"

char	*ft_s2(char *s2, const char *s, unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		s2[i] = ((char *)s)[start++];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= start)
	{
		s2 = (char *)malloc(sizeof(char));
		if (!s2)
			return (NULL);
		s2[0] = '\0';
		return (s2);
	}
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	s2 = (char *)malloc((sizeof(char)) * (len + 1));
	if (!(s2))
		return (NULL);
	return (ft_s2(s2, s, start, len));
}
