/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 21:45:39 by dwinky            #+#    #+#             */
/*   Updated: 2020/12/30 22:11:04 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		len_of_num2(int nbr)
{
	int k;

	if (nbr < 0) // переполнение
		nbr = -nbr;
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

void put_nbr(int nbr)
{
	ft_putnbr_fd(nbr, 1);
}

void	ft_print_d(t_unit *unit, int num)
{
	int len_num;

	len_num = len_of_num2(num);
	if (unit->width == 0 && unit->precision == 0 && num == 0)
		return ;
	else if (unit->precision == 0 && num == 0)
	{
		ft_putchar_fd(' ', 1);
		return ;
	}
	if (num < 0)
		unit->width -= 1;
	if (unit->flag == '-')
	{
		if (num < 0)
			ft_putchar_fd('-', 1);
		if (unit->precision)
		{
			put_counts_char('0', unit->precision - len_num);
			put_nbr(ft_abs(num));
			if (unit->width > unit->precision) // ?????????
				put_counts_char(' ', unit->width - unit->precision);
		}
		else
		{
			put_nbr(ft_abs(num));
			put_counts_char(' ', unit->width - len_num);
		}
	}
	else if (unit->flag == '0')
	{
		if (unit->width > len_num)
		{
			if (unit->precision > len_num)
			{
				put_counts_char(' ', unit->width - unit->precision);
				if (num < 0)
					ft_putchar_fd('-', 1);
				put_counts_char('0', unit->precision - len_num);
			}
			else
			{
				put_counts_char(' ', unit->width - len_num);
			}
		}
		else if (unit->precision > len_num)
		{
			if (num < 0)
				ft_putchar_fd('-', 1);
			put_counts_char('0', unit->precision - len_num);
		}
		if (num < 0)
				ft_putchar_fd('-', 1);
		put_nbr(ft_abs(num));
	}
	else
	{
		if (unit->width > len_num)
		{
			if (unit->precision > len_num)
			{
				put_counts_char(' ', unit->width - unit->precision);
				if (num < 0)
					ft_putchar_fd('-', 1);
				put_counts_char('0', unit->precision - len_num);
			}
			else
			{
				put_counts_char(' ', unit->width - len_num);
				if (num < 0)
					ft_putchar_fd('-', 1);
			}
		}
		else if (unit->precision > len_num)
		{
			if (num < 0)
				ft_putchar_fd('-', 1);
			put_counts_char('0', unit->precision - len_num);
		}
		else if (num < 0)
		{
			ft_putchar_fd('-', 1);
		}
		put_nbr(ft_abs(num));
	}
}