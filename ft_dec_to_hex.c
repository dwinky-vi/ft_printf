/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 17:26:02 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/08 19:29:42 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*ft_reverse_str(char *str)
{
	char	*rev_str;
	size_t	k;
	size_t	len;

	len = ft_strlen(str);
	rev_str = (char *)ft_calloc(1, len + 1);
	if (rev_str == NULL)
	{
		free(str);
		return (NULL);
	}
	k = 0;
	len--;
	while (k <= len)
	{
		rev_str[k] = str[len - k];
		k++;
	}
	free(str);
	return (rev_str);
}

static void		to_hex(char *str, long long nbr)
{
	size_t	k;
	size_t	remainder;

	k = 0;
	while (nbr > 0)
	{
		remainder = nbr % 16;
		if (remainder == 10)
			str[k] = 'a';
		else if (remainder == 11)
			str[k] = 'b';
		else if (remainder == 12)
			str[k] = 'c';
		else if (remainder == 13)
			str[k] = 'd';
		else if (remainder == 14)
			str[k] = 'e';
		else if (remainder == 15)
			str[k] = 'f';
		else
			str[k] = nbr % 16 + '0';
		nbr /= 16;
		k++;
	}
}

char			*ft_dec_to_hex(unsigned long long nbr)
{
	char	*str;

	if (nbr == 0)
		return ((char *)ft_calloc(1, 1));
	str = (char *)ft_calloc(1, len_of_num2(nbr) + 1);
	if (str == NULL)
		return (NULL);
	to_hex(str, nbr);
	return (ft_reverse_str(str));
}
