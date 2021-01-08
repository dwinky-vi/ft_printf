/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_unit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 21:22:02 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/08 18:04:12 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_unit	*creat_new_unit(t_unit **unit)
{
	*unit = (t_unit *)ft_calloc(1, (1 + sizeof(int)) * 2 + sizeof(int));
	if (*unit == NULL)
		return (NULL);
	(*unit)->width = -1;
	(*unit)->precision = -1;
	return (*unit);
}
