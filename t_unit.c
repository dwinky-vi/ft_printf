/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_unit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/29 21:22:02 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/06 21:16:10 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_unit	*creat_new_unit(t_unit **unit)
{
	*unit = (t_unit *)calloc(1, (sizeof(char) + sizeof(int)) * 2 + sizeof(int));
	if (*unit == NULL)
		return (NULL);
	(*unit)->width = -1;
	(*unit)->precision = -1;
	return (*unit);
}
