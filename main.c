/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:52:56 by dwinky            #+#    #+#             */
/*   Updated: 2020/11/25 19:38:45 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	int x;

	x = 42;
	// printf("%d\n", x);
	// printf("%0d\n", x);
	// printf("%5d\n", x);
	// printf("%-5d\n", x);
	// printf("%2d\n", x);
	// printf("%-2d\n", x);
	// // printf(NULL);
	// printf("");
	// printf("%%");
	ft_printf("%d\n", 42);
	ft_printf("%i\n", 42);
	ft_printf("%D\n", 42);
	ft_printf("%dd\n", 0);
	ft_printf("%ddd\n", -42);
	ft_printf("%d\n", 1234567890);
	ft_printf("%c, %c, %c\n", 'a', 'b', 'c');
	ft_printf("%c, %d, %c, %d\n", 'a', 1, 'b', 2);
	ft_printf("%s\n", "hello");
	ft_printf("%s%s%s\n", "print", "", "f");
	ft_printf("%s%s%c\n", "lo", NULL, 'l');
	ft_printf("%s\n", "%");
	ft_printf("%s_%d\n", "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%X", 42);
	
	ft_printf("\n******\n\n");

	printf("%d\n", 42);
	printf("%i\n", 42);
	printf("%D\n", 42);
	printf("%dd\n", 0);
	printf("%ddd\n", -42);
	printf("%d\n", 1234567890);
	printf("%c, %-c, %c\n", 'a', 'b', 'c');
	printf("%c, %d, %c, %d\n", 'a', 1, 'b', 2);
	printf("%s\n", "hello");
	printf("%s%s%s\n", "print", "", "f");
	printf("%s%s%c\n", "lo", NULL, 'l');
	printf("%s\n", "%");
	printf("%s_%d\n", "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%X", 42);
	return (0);
}
