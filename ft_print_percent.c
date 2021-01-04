/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/04 21:27:39 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/04 21:55:29 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_percent(t_unit *unit)
{
	int		k;

	k = unit->width - 1;
	if (unit->flag == '-')
	{
		ft_putchar('%');
		while (k-- > 0)
			ft_putchar(' ');
	}
	// FIX
	// FIX
	// FIX
	// FIX
	// FIX
	// FIX
	// FIX
	// FIX
	// FIX проверить: нужно ли печатать нули для процента. То есть флаг 0.
	// FIX У обычного символа это требуется, а для %?????
	// FIX 
	else if (unit->flag == '0')
	{
		while (k-- > 0)
			ft_putchar('0');
		ft_putchar('%');
	}
	else
	{
		while (k-- > 0)
			ft_putchar(' ');
		ft_putchar('%');
	}
	return (ft_max(unit->width, 1));
}