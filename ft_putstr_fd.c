#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	x;

	if (s)
	{
		x = ft_strlen(s);
		write (fd, s, x);
	}	
}
