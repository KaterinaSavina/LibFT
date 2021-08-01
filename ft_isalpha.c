#include "libft.h"

int	ft_isalpha(int c)
{
	if (((c >= 65) && (c < 91)) || ((c >= 97) && (c < 123)))
		return (1);
	else
		return (0);
}
