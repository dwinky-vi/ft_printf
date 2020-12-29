/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 21:45:39 by dwinky            #+#    #+#             */
/*   Updated: 2020/12/29 22:35:55 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		len_of_num2(int nbr)
{
	int k;

	k = 1;
	while (nbr > 9)
	{
		nbr /= 10;
		k++;
	}
	return (k);
}

void	print_d(t_unit *unit, int num)
{
	int k;

	
	if (unit->width && (unit->width > len_of_num2(num)))
	{
		k = unit->width - len_of_num2(num);
		while(k++ > 0)
			ft_putchar_fd(' ', 1);
		
	}
}