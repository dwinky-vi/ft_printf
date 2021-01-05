/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 15:00:51 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/05 19:22:35 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# define PR printf("\n(****)\n");

typedef struct	s_unit
{
	char		flag;
	int			width;
	int			precision;
	char		type;
	int			length;
}				t_unit;

int				ft_printf(char const *comand_line, ...);

t_unit			*parser(char const *str, va_list *ap);

int				processor(t_unit *unit, va_list *ap);

t_unit			*creat_new_unit(t_unit **unit);

void			print_unit(t_unit *unit);

int				len_of_num(char const *str);

int				len_of_num2(long long nbr);

int				put_counts_char(char ch, int count);

char			*ft_dec_to_hex(long long nbr);

int				ft_print_c(t_unit *unit, int ch);

int				ft_print_d(t_unit *unit, int num);

int				ft_print_p(t_unit *unit, unsigned int num);

int				ft_print_s(t_unit *unit, char *str);

int				ft_print_u(t_unit *unit, unsigned int num);

int				ft_print_x(t_unit *unit, unsigned int num);

int				ft_print_percent(t_unit *unit);

#endif
