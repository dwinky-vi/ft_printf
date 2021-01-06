/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 20:31:13 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/06 14:37:43 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		processor(t_unit *unit, va_list *ap)
{
	int res;

	res = -1;
	if (unit->type == 'd' || unit->type == 'i')
		res = ft_print_d(unit, va_arg(*ap, int));
	else if (unit->type == 'u')
		res = ft_print_u(unit, va_arg(*ap, unsigned int));
	else if (unit->type == 'x' || unit->type == 'X')
		res = ft_print_x(unit, va_arg(*ap, unsigned int));
	else if (unit->type == 'c')
		res = ft_print_c(unit, va_arg(*ap, int));
	else if (unit->type == 's')
		res = ft_print_s(unit, va_arg(*ap, char *));
	else if (unit->type == 'p')
		res = ft_print_p(unit, va_arg(*ap, unsigned long long));
	else if (unit->type == '%')
		res = ft_print_percent(unit);
	else if (unit->type == 0) // проверить. может тоже выводить ошибку и возвращать -1
		return (0);
	return (res);
}
