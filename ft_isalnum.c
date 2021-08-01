#include "libft.h"

int	ft_isalnum(int x)
{
	if (((x >= 48) && (x < 58)) || ((x >= 65) && (x < 91))
		|| ((x >= 97) && (x < 123)))
		return (1);
	else
		return (0);
}
