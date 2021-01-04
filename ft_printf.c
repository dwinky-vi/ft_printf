/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:00:46 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/04 20:49:01 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	width –– ширина
**	precision –– точность
**	was_written –– сколько всего символов было записано
**	flag '0' добавляет нули в начало числа
**	flag '-' добавляет пробелы в начало числа
*/

/*
** Точность задаётся в виде точки с последующим десятичным числом
**  или звёздочкой (*),
**  если число или звёздочка отсутствует (присутствует только точка),
**  то предполагается, что число равно нулю.
*/

/*
**	Undefine behaviors test
**  130
*/

#include "ft_printf.h"

int		ft_error(va_list *ap)
{
	va_end(*ap);
	return (-1);
}
int		ft_printf(char const *comand_line, ...)
{
	va_list ap;
	size_t	k;
	int		was_written;
	t_unit	*unit;

	if (comand_line == NULL)
		return (-1);
	was_written = 0;
	k = 0;
	va_start(ap, comand_line);
	while (comand_line[k])
	{
		if (comand_line[k] == '%')
		{
			if ((unit = parser(comand_line + k + 1, &ap)) == NULL)
				return (ft_error(&ap));
			k += unit->length;
			was_written += processor(unit, &ap);
		}
		else
			was_written += ft_putchar(comand_line[k]);
		k++;
	}
	va_end(ap);
	return (was_written);
}
