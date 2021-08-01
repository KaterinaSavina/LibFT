#include "libft.h"

int	ft_isascii(int x)
{
	if ((x >= 0) && (x < 128))
		return (1);
	else
		return (0);
}
