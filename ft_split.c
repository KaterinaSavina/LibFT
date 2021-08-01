#include "libft.h"

static size_t	ft_slov(char *s, char c)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i] != '\0')
		{
			j++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (j);
}

static size_t	ft_bukv(char *s, char c)
{
	size_t		i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static void	ft_check(char **ch, char *c)
{
	int	i;

	if (!c)
	{
		i = 0;
		while (ch[i])
		{
			free(ch[i]);
			ch[i] = NULL;
			++i;
		}
	}
}

char	**ft_split(char const *s, char c)
{
	char		**ch;
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	ch = (char **)malloc(sizeof(char *) * (ft_slov((char *)s, c) + 1));
	if (!ch)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != '\0' && s[i] != c)
		{
			ch[j] = ft_substr(s, i, ft_bukv((char *)&s[i], c));
			ft_check(ch, ch[j++]);
			i = i + ft_bukv((char *)&s[i], c);
		}
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	ch[j] = NULL;
	return (ch);
}
