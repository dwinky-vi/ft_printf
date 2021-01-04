/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 20:30:39 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/04 14:47:20 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (unit->flag == '0' && unit->precision >= 0)
			unit->flag = 0;
	}
	unit->type = str[k];
	k++;
	unit->length = k;
	return (unit);
}
