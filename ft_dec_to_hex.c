/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 17:26:02 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/05 19:11:08 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char		*ft_reverse_str(char *str)
{
	char		*rev_str;
	size_t		k;
	size_t		len;

	len = ft_strlen(str);
	rev_str = (char *)ft_calloc(1, k + 1);
	if (rev_str == NULL)
		return (NULL);
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

 char		*ft_dec_to_hex(int nbr)
{
	char	*str;
	size_t	remainder;
	size_t	k;

	str = (char *)ft_calloc(1, len_of_num2(nbr) + 1);
	if (str == NULL)
		return (NULL);
	k = 0;
	while (nbr > 16)
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
			str[k] = (nbr % 16) + '0';
		nbr /= 16;
		k++;
	}
	str[k] = nbr % 16 + '0';
	return (ft_reverse_str(str));
}