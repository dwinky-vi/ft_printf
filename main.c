/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:52:56 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/02 17:38:05 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int		main(void)
{
	int ft_z;
	int z;

	ft_z = 0;
	z = 0;
	// Проверить!!!
	// printf("|%-0d|\n", 124);
/*
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
*/
	ft_printf("|%*.*d|\n", 0, 0, 0);
	   printf("|%*.*d|\n", 0, 0, 0);
	printf("===\n");
	ft_printf("|%*.*d|\n", 1, 0, 0);
	   printf("|%*.*d|\n", 1, 0, 0);
	printf("===\n");
	ft_printf("|%*.*d|\n", 0, 1, 0);
	   printf("|%*.*d|\n", 0, 1, 0);
	printf("===\n");
	ft_printf("|%*.*d|\n", 0, 0, 1);
	   printf("|%*.*d|\n", 0, 0, 1);
	printf("===\n");
	ft_printf("|%*.*d|\n", 1, 0, 1);
	   printf("|%*.*d|\n", 1, 0, 1);
	printf("===\n");
	ft_printf("|%*.*d|\n", 0, 1, 1);
	   printf("|%*.*d|\n", 0, 1, 1);
	printf("===\n");
	ft_printf("|%*.*d|\n", 1, 1, 0);
	   printf("|%*.*d|\n", 1, 1, 0);
	printf("===\n");
	ft_printf("|%*.*d|\n", 0, 0, 123);
	   printf("|%*.*d|\n", 0, 0, 124);
	printf("===\n");
	ft_printf("|%*.*d|\n", -0, 10, 123);
	   printf("|%*.*d|\n", -0, 10, 124);
	printf("===\n");
	ft_printf("|%*.*d|\n", 0, 10, 123);
	   printf("|%*.*d|\n", 0, 10, 124);
	printf("===\n");
	ft_printf("|%*.*d|\n", 1, -10, 123);
	   printf("|%*.*d|\n", 1, -10, 124);
	printf("===\n");
	ft_printf("|%*.*d|\n", 4, 3, 123);
	   printf("|%*.*d|\n", 4, 3, 124);
	printf("===\n");
	ft_printf("|%*.*d|\n", 3, 3, 123);
	   printf("|%*.*d|\n", 3, 3, 124);
	printf("===\n");
	ft_printf("|%*.*d|\n", -3, 1, 123);
	   printf("|%*.*d|\n", -3, 1, 124);
	printf("===\n");
	ft_printf("|%*.*d|\n", -3, 10, 123);
	   printf("|%*.*d|\n", -3, 10, 124);
	printf("===\n");
	ft_printf("|%*.*d|\n", 10, 10, 123);
	   printf("|%*.*d|\n", 10, 10, 124);
	printf("===\n");
	ft_printf("|%*.*d|\n", 1, 10, INT_MAX);
	   printf("|%*.*d|\n", 1, 10, INT_MAX);
	printf("===\n");
	// ft_printf("|%*.*d|\n", 1, 16, -INT_MAX - 1);
	//    printf("|%*.*d|\n", 1, 16, -INT_MAX - 1);
	// printf("===\n");
	// ???????????????????????
	// ft_printf("|%*.*d|\n", 1, 10, INT_MIN);
	//    printf("|%*.*d|\n", 1, 10, INT_MIN);
	// printf("===\n");
	ft_printf("|%*d|\n", 10, 123);
	   printf("|%*d|\n", 10, 124);
	printf("===\n");
	ft_printf("|%*d|\n", 1, 123);
	   printf("|%*d|\n", 1, 124);
	printf("===\n");
	ft_printf("|%*d|\n", 3, 123);
	   printf("|%*d|\n", 3, 124);
	printf("===\n");
	ft_printf("|%*d|\n", 4, 123);
	   printf("|%*d|\n", 4, 124);
	printf("===\n");
	ft_printf("|%-*d|\n", 10, 123);
	   printf("|%-*d|\n", 10, 124);
	printf("===\n");
	ft_printf("|%-*d|\n", 3, 123);
	   printf("|%-*d|\n", 3, 124);
	printf("===\n");
	ft_printf("|%-*d|\n", 4, 123);
	   printf("|%-*d|\n", 4, 124);
	printf("===\n");
	ft_printf("|%-*d|\n", 5, 123);
	   printf("|%-*d|\n", 5, 124);
	printf("===\n");
	ft_printf("|%-*d|\n", 3, -123);
	   printf("|%-*d|\n", 3, -124);
	printf("===\n");
	ft_printf("|%-*d|\n", 4, -123);
	   printf("|%-*d|\n", 4, -124);
	printf("===\n");
	ft_printf("|%----*d|\n", 10, 123);
	   printf("|%----*d|\n", 10, 124);
	printf("===\n");
	ft_printf("|%-----*d|\n", 10, 123);
	   printf("|%-----*d|\n", 10, 124);
	printf("===\n");
	ft_printf("|%-------------.*d|\n", 10, 123);
	   printf("|%-------------.*d|\n", 10, 124);
	printf("===\n");

	ft_z = ft_printf("|%*d|\n", 1, -123);
	z = printf("|%*d|\n", 1, -124);
	printf("ft_z == %d\nz == %d\n===\n", ft_z, z);

	return (0);
}
