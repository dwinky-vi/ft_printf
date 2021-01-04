/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/02 20:33:15 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/04 13:42:29 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** что делать с флагом 0 **/
#include "ft_printf.h"

static void		put_counts_char(char ch, int count)
{
	while (count-- > 0)
		ft_putchar(ch);
}

// static int		ft_print_null(int width, int len)
// {
// 	char	str_null[7];
// 	int		count_spaces;

// 	if (len == -1 && width <= 6)
// 	{
// 		ft_putstr_fd("(null)", 1);
// 		return (6);
// 	}
// 	len = (len > 6 ? 6 : len);
// 	len = (len == -1 ? 6 : len);
// 	str_null[0] = '(';
// 	str_null[1] = 'n';
// 	str_null[2] = 'u';
// 	str_null[3] = 'l';
// 	str_null[4] = 'l';
// 	str_null[5] = ')';
// 	str_null[6] = '\0';
// 	count_spaces = 0;
// 	str_null[len] = '\0';
// 	if (width != -1)
// 	{
// 		count_spaces = width - len;
// 		put_counts_char(' ', count_spaces);
// 	}
// 	count_spaces = (count_spaces < 0 ? 0 : count_spaces);
// 	ft_putstr_fd(str_null, 1);
// 	return (len + count_spaces);
// }

int				ft_print_s(t_unit *unit, char *str)
{
	int k;
	int len_str;
	int count_spaces;

	if (str == NULL)
		// return (ft_print_null(unit->width, unit->precision));
		return (ft_print_s(unit, "(null)"));
	len_str = ft_strlen(str);
	k = 0;
	if (len_str > unit->precision && unit->precision != -1)
	{
		count_spaces = unit->width - unit->precision;
		len_str = unit->precision;
	}
	else
		count_spaces = (unit->width < len_str ? 0 : unit->width - len_str);
	// count_spaces = count_spaces < 0 ? 0 : count_spaces;
	// if (unit->flag != '-')
	// {	
	// 	put_counts_char(' ', count_spaces);
	// 	while (len_str > k)
	// 	{
	// 		ft_putchar_fd(str[k], 1);
	// 		k++;
	// 	}
	// }
	// else
	// {
	// 	while (len_str > k)
	// 	{
	// 		ft_putchar_fd(str[k], 1);
	// 		k++;
	// 	}
	// 	put_counts_char(' ', count_spaces);
	// }
	// printf("\n%d, %d\n", count_spaces, len_str);
	if (unit->flag != '-')
		put_counts_char(' ', count_spaces);
	while (len_str > k)
	{
		ft_putchar(str[k]);
		k++;
	}
	if (unit->flag == '-')
		put_counts_char(' ', count_spaces);
	return (len_str + count_spaces);
}
