/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 21:45:39 by dwinky            #+#    #+#             */
/*   Updated: 2020/12/30 18:46:22 by dwinky           ###   ########.fr       */
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

void	ft_print_d(t_unit *unit, int num)
{
	int k;
	int j;

	if (unit->flag == '-')
	{
		if (unit->precision)
		{
			j = len_of_num2(num) - unit->precision;
			while(j-- > 0)
				ft_putchar_fd('0', 1);
			ft_putnbr_fd(num, 1);
		}
		else
		{
			ft_putnbr_fd(num, 1);
			while(k-- > 0)
				ft_putchar_fd(' ', 1);
		}
	}
	else if (unit->width && (unit->width > len_of_num2(num)))
	{
		k = unit->width - len_of_num2(num);
		if (unit->flag == '0' && !(unit->precision))
		{
			while(k-- > 0)
				ft_putchar_fd('0', 1);
			ft_putnbr_fd(num, 1);
		}
		else
		{
			if (unit->flag == '-')
			{
				// if (unit->precision)
				// {
				// 	j = len_of_num2(num) - unit->precision;
				// 	while(j-- > 0)
				// 		ft_putchar_fd('0', 1);
				// 	ft_putnbr_fd(num, 1);
				// }
				// else
				// {
				// 	ft_putnbr_fd(num, 1);
				// 	while(k-- > 0)
				// 		ft_putchar_fd(' ', 1);
				// }
			}
			else
			{
				while(k-- > 0)
					ft_putchar_fd(' ', 1);
				ft_putnbr_fd(num, 1);
			}
		}
			
	}
	else
	{
		ft_putnbr_fd(num, 1);
	}
}