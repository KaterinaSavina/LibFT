#include "libft.h"

static size_t	ft_len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		++i;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*ch;
	unsigned int	un;
	size_t			i;

	un = n;
	i = ft_len(n);
	if (n < 0)
	{
		un = -un;
		i++;
	}
	ch = (char *)malloc(sizeof(char) * (i + 1));
	if (!ch)
		return (NULL);
	ch[i] = '\0';
	ch[--i] = (un % 10) + '0';
	un /= 10;
	while (un)
	{
		ch[--i] = (un % 10) + '0';
		un /= 10;
	}		
	if (n < 0)
		ch[0] = '-';
	return (ch);
}
