#include "libft.h"

char	*ft_s3(char *s1, char *s3, char *s2, int i3)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	if (i3 == 0)
		((char *)s3)[i] = '\0';
	while (i < i3)
	{
		while (s1[k] != '\0')
		{
			((char *)s3)[i] = ((char *)s1)[k];
			i++;
			k++;
		}
		k = 0;
		while (s2 [k] != '\0')
		{
			((char *)s3)[i] = ((char *)s2)[k];
			i++;
			k++;
		}
		((char *)s3)[i] = '\0';
	}
	return ((char *)s3);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char const	*s3;
	int			i3;

	i3 = 0;
	if ((!s1) && (!s2))
		return (NULL);
	if ((!s1 && s2) || (s1 && !s2))
	{
		if (!s1 && s2)
			i3 = ft_strlen((char *)s2);
		if (s1 && !s2)
			i3 = ft_strlen((char *)s1);
		s3 = ((char *)malloc((sizeof(*s3)) * i3 + 1));
		if (!(s3))
			return (NULL);
		((char *)s3)[i3] = '\0';
		return ((char *)s3);
	}
	i3 = ((ft_strlen((char *)s1)) + (ft_strlen((char *)s2)));
	s3 = ((char *)malloc((sizeof(*s3)) * i3 + 1));
	if (!(s3))
		return (0);
	s3 = ft_s3((char *)s1, (char *)s3, (char *)s2, i3);
	return ((char *)s3);
}
