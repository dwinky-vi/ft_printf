/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 21:45:39 by dwinky            #+#    #+#             */
/*   Updated: 2020/12/30 19:22:28 by dwinky           ###   ########.fr       */
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

void	put_counts_char(char ch, int count)
{
	while (count-- > 0)
		ft_putchar_fd(ch, 1);
}
void	ft_print_d(t_unit *unit, int num)
{
	int k;
	int j;

	if (unit->flag == '-')
	{
		k = unit->width - len_of_num2(num);
		if (unit->precision)
		{
			j =  unit->precision - len_of_num2(num);
			k -= j;
			put_counts_char('0', j);
			ft_putnbr_fd(num, 1);
			if (unit->width > unit->precision)
			{
				put_counts_char(' ', unit->width - len_of_num2(num));
			}
		}
		else
		{
			ft_putnbr_fd(num, 1);
			while(k-- > 0)
				ft_putchar_fd(' ', 1);
		}
	}
	else if (unit->flag == '0')
	{
		k = unit->width - len_of_num2(num);
		if (!(unit->precision))
		{
			while(k-- > 0)
				ft_putchar_fd('0', 1);
			ft_putnbr_fd(num, 1);
		}
		else
		{
			while(k-- > 0)
				ft_putchar_fd(' ', 1);
			ft_putnbr_fd(num, 1);
		}
			
	}
	else
	{
		ft_putnbr_fd(num, 1);
	}
}