#include "libft.h"

int	ft_isprint(int x)
{
	if ((x >= 32) && (x < 127))
		return (1);
	else
		return (0);
}
