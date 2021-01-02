/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:00:51 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/02 19:38:40 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# define LOL printf("\ntyk\n");

int		ft_printf(char const *comand_line, ...);

typedef struct	s_unit
{
	char		flag;
	int			width;
	int			precision;
	char		type;
	int			length;
}				t_unit;

t_unit	*creat_new_unit(t_unit **unit);

void	print_unit(t_unit *unit);

t_unit	*parser(char const *str, va_list *ap);

int		len_of_num(char const *str);

int		len_of_num2(long long nbr);

int		ft_print_d(t_unit *unit, int num);

#endif
