/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 20:31:13 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/02 21:42:33 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		processor(t_unit *unit, va_list *ap)
{
	size_t res;

	res = -1;
	if (unit->type == 'd' || unit->type == 'i')
		res = ft_print_d(unit, va_arg(*ap, int));
	else if (unit->type == 'u')
		res = ft_print_u(unit, va_arg(*ap, unsigned int));
	else if (unit->type == 'x')
		res = ft_print_x(unit, va_arg(*ap, int));
	else if (unit->type == 'c')
		res = ft_print_c(unit, va_arg(*ap, int));
	else if (unit->type == 's')
		res = ft_print_s(unit, va_arg(*ap, char *));
	else if (unit->type == 'p')
		res = ft_print_p(unit, va_arg(*ap, int)); //
	return (res);
}
