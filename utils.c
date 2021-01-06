/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 16:00:47 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/06 20:40:58 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		len_of_num(char const *str)
{
	int k;

	k = 0;
	while (ft_isdigit(str[k]))
		k++;
	return (k);
}

int		len_of_num2(long long nbr)
{
	int k;

	if (nbr < 0)
		nbr = -nbr;
	k = 1;
	while (nbr > 9)
	{
		nbr /= 10;
		k++;
	}
	return (k);
}

int		put_counts_char(char ch, int count)
{
	int res;

	res = 0;
	while (count-- > 0)
		res += ft_putchar(ch);
	return (res);
}
