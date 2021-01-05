/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 20:33:15 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/04 17:56:56 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  Флаг 0 с использованием спецификатора s вызывает неопределённое поведение.
**  В моём случае флаг будет игнорироваться, то есть нуль НЕ будут печататься.
*/
#include "ft_printf.h"

int	ft_print_s(t_unit *unit, char *str)
{
	int k;
	int len_str;
	int count_spaces;

	if (str == NULL)
		return (ft_print_s(unit, "(null)"));
	len_str = ft_strlen(str);
	k = 0;
	if (len_str > unit->precision && unit->precision != -1)
	{
		count_spaces = (unit->width == -1 ? 0 : unit->width) - unit->precision;
		len_str = unit->precision;
	}
	else
		count_spaces = (unit->width < len_str ? 0 : unit->width - len_str);
	if (count_spaces < 0)
		count_spaces = 0;
	if (unit->flag != '-')
		put_counts_char(' ', count_spaces);
	while (len_str > k)
		k += ft_putchar(str[k]);
	if (unit->flag == '-')
		put_counts_char(' ', count_spaces);
	free(unit);
	return (len_str + count_spaces);
}
