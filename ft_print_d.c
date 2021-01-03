/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 21:45:39 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/03 18:45:59 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		put_counts_char(char ch, int count)
{
	while (count-- > 0)
		ft_putchar_fd(ch, 1);
}

static void	flag_minus(int num, int len_num, t_unit *unit, int *res)
{
	if (num < 0)
	{
		ft_putchar('-');
		(*res)++;
	}
	if (unit->width > unit->precision)
	{
		ft_putnbr(ft_abs(num));
		put_counts_char(' ', unit->width - len_num - (num < 0 ? 1 : 0));
		*res += len_num + (unit->width - len_num - (num < 0 ? 1 : 0));
	}
	else
	{
		put_counts_char('0', unit->precision - len_num);
		ft_putnbr(ft_abs(num));
		*res += (unit->precision - len_num) + len_num;
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
				(*res)++;
			}
			put_counts_char('0', unit->precision - len_num);
			*res += (unit->precision - len_num);
		}
		else
		{
			if (num < 0)
			{
				ft_putchar('-');
				(*res)++;
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
			(*res)++;
		}
		put_counts_char('0', unit->precision - len_num);
		*res += (unit->precision - len_num);
	}
	else if (num < 0)
	{
		ft_putchar('-');
		(*res)++;
	}
	ft_putnbr(ft_abs(num));
	*res += len_num;
}

static void	no_flag(int num, int len_num, t_unit *unit, int *res)
{
	if (unit->width > len_num)
	{
		if (unit->precision > len_num)
		{
			put_counts_char(' ', unit->width - unit->precision);
			res += (unit->width - unit->precision);
			if (num < 0)
			{
				ft_putchar('-');
				res++;
			}
			put_counts_char('0', unit->precision - len_num);
			res += (unit->precision - len_num);
		}
		else
		{
			put_counts_char(' ', unit->width - (len_num + (num < 0 ? 1 : 0)));
			res += (unit->width - (len_num + (num < 0 ? 1 : 0)));
			if (num < 0)
			{
				ft_putchar('-');
				res++;
			}
		}
	}
	else if (unit->precision > len_num)
	{
		if (num < 0)
		{
			ft_putchar('-');
			res++;
		}
		put_counts_char('0', unit->precision - len_num);
		res += (unit->precision - len_num);
	}
	else if (num < 0)
	{
		ft_putchar('-');
		res++;
	}
	ft_putnbr(ft_abs(num));
	res += len_num;
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
		ft_putchar(' ');
		res++;
		return (1);
	}
	if (unit->flag == '-')
		flag_minus(num, len_num, unit, &res);
	else if (unit->flag == '0')
		flag_zero(num, len_num, unit, &res);
	else
		no_flag(num, len_num, unit, &res);
	return (res);
}
