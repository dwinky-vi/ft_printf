/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 20:32:58 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/04 21:24:42 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** как обрабатывать флаг и спецификатор %c
** как обрабатывать точность и спецификатор %c
*/

#include "ft_printf.h"

int	ft_print_c(t_unit *unit, int ch)
{
	int		k;

	k = unit->width - 1;
	if (unit->flag == '-')
	{
		ft_putchar(ch);
		while (k-- > 0)
			ft_putchar_fd(' ', 1);
	}
	else
	{
		while (k-- > 0)
			ft_putchar(' ');
		ft_putchar(ch);
	}
	return (ft_max(unit->width, 1));
}
