#include "libft.h"

int	ft_tolower(int x)
{
	if ((x >= 65) && (x < 91))
		return (x + 32);
	else
		return (x);
}
