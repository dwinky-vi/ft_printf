/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:00:46 by dwinky            #+#    #+#             */
/*   Updated: 2020/12/29 21:36:41 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	size_t	width;// ширина
**	size_t	precision; // точность
**	size_t	was_written; // сколько всего символов было записано
**  flag '0' добавляет нули в начало числа
*/

#include "ft_printf.h"
#include <stdio.h>

int		processor(t_unit *unit)
{
	if (unit->type == 'd' || unit->type == 'i' || unit->type == 'D' || unit->type == 'I')
	{
		print_d();
	}
	else if (unit->type == 'u' || unit->type == 'U')
	{
		print_u();
	}
	else if (unit->type == 'x' || unit->type == 'X')
	{
		print_x();
	}
	else if (unit->type == 'X')
	{
		print_X();
	}
	else if (unit->type == 'c' || unit->type == 'C')
	{
		print_c();
	}
	else if (unit->type == 's' || unit->type == 'S')
	{
		print_s();
	}
	else if (unit->type = 'p' || unit->type == 'P')
	{
		print_p();
	}
	return (0);
}

int		len_of_num(char const *str)
{
	int k;

	k = 0;
	while (ft_isdigit(str[k]))
		k++;
	return (k);
}

int		ft_printf(char const *comand_line, ...)
{
	va_list ap;
	size_t	k;
	t_unit *unit;

	if (comand_line == NULL)
		return (-1);
	k = 0;
	va_start(ap, comand_line);
	while (comand_line[k])
	{
		if (comand_line[k] == '%' && comand_line[k + 1] == '%')
		{
			ft_putstr_fd("%%", 1);
		}
		else if (comand_line[k] == '%')
		{
			if ((unit = parser(comand_line + k + 1, &ap)) == NULL)
				return (-1);
			processor(unit);
			
		}
		else
			ft_putchar_fd(comand_line[k], 1);
		k++;
	}
	va_end(ap);
	return (0);
}









		// 	if (comand_line[k + 1] == '%')
		// 	{
		// 		ft_putstr_fd("%%", 1);
		// 		k++;
		// 	}
		// 	else if (comand_line[k + 1] == 'c' || comand_line[k + 1] == 'C')
		// 	{
		// 		ft_putchar_fd(va_arg(ap, int), 1);
		// 		k++;
		// 	}
		// 	else if (comand_line[k + 1] == 'd' || comand_line[k + 1] == 'D')
		// 	{
		// 		ft_putnbr_fd(va_arg(ap, int), 1);
		// 		k++;
		// 	}
		// 	else if (comand_line[k + 1] == 's' || comand_line[k + 1] == 'S')
		// 	{
		// 		char *str;
		// 		str = va_arg(ap, char *);
		// 		if (str == NULL)
		// 			ft_putstr_fd("(null)", 1);
		// 		else
		// 			ft_putstr_fd(str, 1);
		// 		k++;
		// 	}
		// }