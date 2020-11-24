#include "libft.h"

int	ft_abs(int nbr)
{
	if (nbr == INT_MIN)
		return (-1);
	return (nbr < 0 ? -nbr : nbr);
}