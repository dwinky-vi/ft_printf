/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:00:46 by dwinky            #+#    #+#             */
/*   Updated: 2020/11/25 20:12:28 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(char const *comand_line, ...)
{
	va_list ap;
	size_t	k;
	size_t	width;// ширина
	size_t	precision; // точность
	size_t	was_written; // сколько всего символов было записано

	if (comand_line == NULL)
		return (-1);
	k = 0;
	va_start(ap, comand_line);
	while (comand_line[k])
	{
		if (comand_line[k] == '%')
		{
			if (comand_line[k + 1] == '%')
			{
				ft_putstr_fd("%%", 1);
				k++;
			}
			else if (comand_line[k + 1] == 'c' || comand_line[k + 1] == 'C')
			{
				ft_putchar_fd(va_arg(ap, int), 1);
				k++;
			}
			else if (comand_line[k + 1] == 'd' || comand_line[k + 1] == 'D')
			{
				ft_putnbr_fd(va_arg(ap, int), 1);
				k++;
			}
			else if (comand_line[k + 1] == 's' || comand_line[k + 1] == 'S')
			{
				char *str;
				str = va_arg(ap, char *);
				if (str == NULL)
					ft_putstr_fd("(null)", 1);
				else
					ft_putstr_fd(str, 1);
				k++;
			}
		}
		else
		{
			ft_putchar_fd(comand_line[k], 1);
		}
		k++;
	}
	va_end(ap);
	return (0);
}