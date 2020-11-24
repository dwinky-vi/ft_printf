#include "libft.h"

void	ft_swap(int *x, int *y)
{
	int z;

	z = *x;
	*x = *y;
	*y = z;
}