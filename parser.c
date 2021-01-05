/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 20:30:39 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/05 21:12:42 by dwinky           ###   ########.fr       */
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
		else if (str[k2] == '0' && flag == 0)
			flag = '0';
		k2++;
	}
	*k = k2;
	return (flag);
}

static void	cancel_precision(t_unit *unit)
{
	char type;

	type = unit->type;
	if (unit->flag == '0' && unit->precision >= 0 && (type == 'd' ||
	type == 'i' || type == 'u' || type == 'x' || type == 'X' || type == 's'))
		unit->flag = 0;
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
	cancel_precision(unit);
	return (unit);
}
