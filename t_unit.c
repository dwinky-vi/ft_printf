/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_unit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 21:22:02 by dwinky            #+#    #+#             */
/*   Updated: 2020/12/30 16:08:16 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_unit	*creat_new_unit(t_unit **unit)
{
	*unit = (t_unit *)calloc(1, (sizeof(char) + sizeof(int) * 2 + sizeof(int)));
	return (*unit);
}

void	print_unit(t_unit *unit)
{
	if (unit->flag != 0)
		printf("flag = %c ", unit->flag);
	if (unit->width != 0)
		printf("width = %d ", unit->width);
	if (unit->precision != 0)
		printf("precision = %d ", unit->precision);
	if (unit->type != 0)
		printf("type = %c\n", unit->type);
	if (unit->length != 0)
		printf("length = %d\n", unit->length);
}
