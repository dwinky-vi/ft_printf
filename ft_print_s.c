/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 20:33:15 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/02 21:57:24 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		put_counts_char(char ch, int count)
{
	while (count-- > 0)
		ft_putchar_fd(ch, 1);
}

int	ft_print_s(t_unit *unit, char *str)
{
	int k;

	k = 0;
	// if (str == NULL && unit->precision > 7)
	// 	ft_putstr_fd("(null)", 1);
	// else
	// 	ft_putstr_fd(str, 1);
	put_counts_char(' ', unit->width - 5); // FIX
	if (unit->precision == -1)
	{
		ft_putstr_fd(str, 1);
	}
	else
	{
		while (unit->precision > k)
		{
			ft_putchar_fd(str[k], 1);
			k++;
		}
	}
	return (0);
}
