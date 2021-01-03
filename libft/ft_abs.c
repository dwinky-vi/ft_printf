#include "libft.h"

long long	ft_abs(long long nbr)
{
	if (nbr == INT_MIN)
		return (INT_MIN);
	return (nbr < 0 ? -nbr : nbr);
}