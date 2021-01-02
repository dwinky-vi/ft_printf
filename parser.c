/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 20:30:39 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/02 17:34:19 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_unit	*parser(char const *str, va_list *ap)
{
	int		k;
	t_unit	*unit;

	k = 0;
	if (creat_new_unit(&unit) == NULL)
		return (NULL);
	if (str[k] == '-')
	{
		unit->flag = '-';
		while (str[k] == '-')
			k++;
		if (str[k] == '0')
			return (NULL);
	}
	if (str[k] == '0')
	{
		unit->flag = '0';
		k++;
	}
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
			k++;
		}
		else if (ft_isdigit(str[k]))
		{
			unit->precision = atoi(str + k);
			k += len_of_num(str + k);
		}
	}
	unit->type = str[k];
	k++;
	unit->length = k;
	return (unit);
}
