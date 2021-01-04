/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 21:45:39 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/04 17:59:04 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	flag_minus(int num, int len_num, t_unit *unit, int *res)
{
	int z;

	if (num < 0)
	{
		ft_putchar('-');
		(*res)++;
	}
	if (unit->precision > len_num)
	{
		put_counts_char('0', unit->precision - len_num);
		*res += unit->precision - len_num;
	}
	ft_putnbr(ft_abs(num));
	*res += len_num;
	if (unit->width > ft_max(len_num, unit->precision))
	{
		z = unit->width - ft_max(len_num, unit->precision) - (num < 0 ? 1 : 0);
		put_counts_char(' ', z);
		*res += z;
	}
}

static void	flag_zero(int num, int len_num, t_unit *unit, int *res)
{
	if (unit->width > len_num)
	{
		if (unit->precision > len_num)
		{
			put_counts_char(' ', unit->width - unit->precision);
			*res += (unit->width - unit->precision);
			if (num < 0)
			{
				ft_putchar_fd('-', 1);
				// (*res)++;
			}
			put_counts_char('0', unit->precision - len_num);
			*res += (unit->precision - len_num);
		}
		else
		{
			if (num < 0)
			{
				ft_putchar('-');
				// (*res)++;
			}
			put_counts_char('0', unit->width - len_num - (num < 0 ? 1 : 0));
			*res += (unit->width - len_num);
		}
	}
	else if (unit->precision > len_num)
	{
		if (num < 0)
		{
			ft_putchar('-');
			// (*res)++;
		}
		put_counts_char('0', unit->precision - len_num);
		*res += (unit->precision - len_num);
	}
	else if (num < 0)
	{
		ft_putchar('-');
		// (*res)++;
	}
	ft_putnbr(ft_abs(num));
	*res += len_num;
	if (unit->width <= len_num && num < 0)
		(*res)++;
}

static void	no_flag(int num, int len_num, t_unit *unit, int *res)
{
	if (num < 0)
		(unit->width)--;
	if (unit->width > len_num)
	{
		put_counts_char(' ', unit->width - ft_max(unit->precision, len_num));
		*res += (unit->width - ft_max(unit->precision, len_num));
	}
	if (num < 0)
		ft_putchar('-');
	if (unit->precision > len_num)
	{
		put_counts_char('0', unit->precision - len_num);
		*res += (unit->precision - len_num);
	}
	if (num < 0)
		(*res)++;
	if (num == INT_MIN)
		ft_putstr("2147483648");
	else
		ft_putnbr(ft_abs(num));
	*res += len_num;
}

int			ft_print_d(t_unit *unit, int num)
{
	int len_num;
	int	res;

	res = 0;
	len_num = len_of_num2(num);
	if (unit->width == 0 && unit->precision == 0 && num == 0)
		return (0);
	else if (unit->precision == 0 && num == 0)
	{
		put_counts_char(' ', unit->width);
		return (unit->width == -1 ? 0 : unit->width);
	}
	if (unit->flag == '-')
		flag_minus(num, len_num, unit, &res);
	else if (unit->flag == '0')
		flag_zero(num, len_num, unit, &res);
	else
		no_flag(num, len_num, unit, &res);
	return (res);
}
