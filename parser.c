/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 20:30:39 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/06 15:05:42 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	printf("%t", 1); –– это невалидный случай.
**	Если после процента (также после флагов, ширины и точности)
**	не стоит валидный спецификатор, то моя функция прекращает свою работу
**	и возвращает -1.
*/

#include "ft_printf.h"

static char	which_flag(char const *str, int *k)
{
	char	flag;
	int		k2;

	k2 = *k;
	flag = 0;
	while (str[k2] == '-' || str[k2] == '0')
	{
		if (str[k2] == '-')
			flag = '-';
		else if (str[k2] == '0' && flag != '-')
			flag = '0';
		k2++;
	}
	*k = k2;
	return (flag);
}

static char	check_type(char type)
{
	if (type == '\0')
		return (0);
	if (type != 'c' && type != 's' && type != 'p' && type != 'd' &&
	type != 'i' && type != 'u' && type != 'x' && type != 'X' && type != '%')
		return (0);
	else
		return (type);
}

static void	cancel_flag_zero_with_precision(t_unit *unit)
{
	char type;

	type = unit->type;
	if (unit->flag == '0' && unit->precision >= 0 && (type == 'd' ||
	type == 'i' || type == 'u' || type == 'x' || type == 'X'))
		unit->flag = 0;
}

static void	cansel_flag_zero(t_unit *unit)
{
	if (unit->flag == '0' &&
		(unit->type == 'c' || unit->type == 's' || unit->type == 'p'))
		unit->flag = 0;
}

t_unit		*parser(char const *str, va_list *ap)
{
	int		k;
	t_unit	*unit;

	k = 0;
	if (creat_new_unit(&unit) == NULL)
		return (NULL);
	unit->flag = which_flag(str, &k);
	if (str[k] == '*')
	{
		unit->width = va_arg(*ap, int);
		if (unit->width < 0)
		{
			unit->flag = '-';
			unit->width *= -1;
		}
		k++;
	}
	else if (ft_isdigit(str[k]))
	{
		unit->width = atoi(str + k);
		k += len_of_num(str + k);
	}
	if (str[k] == '.')
	{
		k++;
		if (str[k] == '*')
		{
			unit->precision = va_arg(*ap, int);
			unit->precision = (unit->precision < 0 ? -1 : unit->precision);
			k++;
		}
		else if (ft_isdigit(str[k]))
		{
			unit->precision = atoi(str + k);
			k += len_of_num(str + k);
		}
		else
			unit->precision = 0;
	}
	if ((unit->type = check_type(str[k])) == 0)
		return (NULL);
	unit->length = ++k;
	cancel_flag_zero_with_precision(unit);
	cansel_flag_zero(unit);
	return (unit);
}
