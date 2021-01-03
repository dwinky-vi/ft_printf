/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 20:33:15 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/03 14:31:29 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void		put_counts_char(char ch, int count)
{
	while (count-- > 0)
		ft_putchar_fd(ch, 1);
}

static int		ft_print_null(int len)
{
	char str_null[7];

	if (len >= 6 || len == -1)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	
	str_null[0] = '(';
	str_null[1] = 'n';
	str_null[2] = 'u';
	str_null[3] = 'l';
	str_null[4] = 'l';
	str_null[5] = ')';
	str_null[6] = '\0';
	str_null[len] = '\0';
	ft_putstr_fd(str_null, 1);
	return (len);
}

int			ft_print_s(t_unit *unit, char *str)
{
	int k;
	int len_str;
	int count_spaces;

	if (str == NULL)
	{
		if (unit->width == -1)
		{
			return (ft_print_null(unit->precision));
		}
		else
		{
			put_counts_char(' ', unit->width - (unit->precision > 6 ? 6 : unit->precision));
			return (ft_print_null(unit->precision));
		}
	}
	len_str = ft_strlen(str);
	k = 0;
	if (len_str > unit->precision && unit->precision != -1)
	{
		count_spaces = unit->width - unit->precision;
		len_str = unit->precision;
	}
	else
		count_spaces = unit->width - len_str;
	put_counts_char(' ', count_spaces);
	while (len_str > k)
	{
		ft_putchar_fd(str[k], 1);
		k++;
	}
	return (0);
}
