/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwinky <dwinky@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 17:52:56 by dwinky            #+#    #+#             */
/*   Updated: 2021/01/08 21:54:51 by dwinky           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"
#include <stdio.h>

void		test_d(int n)
{
	ft_printf("%dd\n", 0);
		printf("%dd\n", 0);
	printf("===\n");
	ft_printf("%ddd\n", -42);
		printf("%ddd\n", -42);
	printf("===\n");
	ft_printf("|%*.*d|\n", 0, 0, 0 * n);
	   printf("|%*.*d|\n", 0, 0, 0 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 1, 0, 0 * n);
	   printf("|%*.*d|\n", 1, 0, 0 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 0, 1, 0 * n);
	   printf("|%*.*d|\n", 0, 1, 0 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 0, 0, 1 * n);
	   printf("|%*.*d|\n", 0, 0, 1 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 1, 0, 1 * n);
	   printf("|%*.*d|\n", 1, 0, 1 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 0, 1, 1 * n);
	   printf("|%*.*d|\n", 0, 1, 1 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 1, 1, 0 * n);
	   printf("|%*.*d|\n", 1, 1, 0 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 0, 0, 123 * n);
	   printf("|%*.*d|\n", 0, 0, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", -0, 10, 123 * n);
	   printf("|%*.*d|\n", -0, 10, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 0, 10, 123 * n);
	   printf("|%*.*d|\n", 0, 10, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 1, -10, 123 * n);
	   printf("|%*.*d|\n", 1, -10, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 4, 3, 123 * n);
	   printf("|%*.*d|\n", 4, 3, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 3, 3, 123 * n);
	   printf("|%*.*d|\n", 3, 3, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", -3, 1, 123 * n);
	   printf("|%*.*d|\n", -3, 1, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", -3, 10, 123 * n);
	   printf("|%*.*d|\n", -3, 10, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 10, 10, 123 * n);
	   printf("|%*.*d|\n", 10, 10, 124 * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 1, 10, INT_MAX * n);
	   printf("|%*.*d|\n", 1, 10, INT_MAX * n);
	printf("===\n");
	ft_printf("|%-*.*d|\n", 1, 1, 0 * n);
	   printf("|%-*.*d|\n", 1, 1, 0 * n);
	printf("===\n");
	ft_printf("|%-*.*d|\n", 1, -10, 123 * n);
	   printf("|%-*.*d|\n", 1, -10, 124 * n);
	printf("===\n");
	ft_printf("|%-*.*d|\n", 4, 3, 123 * n);
	   printf("|%-*.*d|\n", 4, 3, 124 * n);
	printf("===\n");
	ft_printf("|%-*.*d|\n", 3, 3, 123 * n);
	   printf("|%-*.*d|\n", 3, 3, 124 * n);
	printf("===\n");
	ft_printf("|%-*.*d|\n", -3, 1, 123 * n);
	   printf("|%-*.*d|\n", -3, 1, 124 * n);
	printf("===\n");
	ft_printf("|%-*.*d|\n", -3, 10, 123 * n);
	   printf("|%-*.*d|\n", -3, 10, 124 * n);
	printf("===\n");
	ft_printf("|%-*.*d|\n", 10, 10, 123 * n);
	   printf("|%-*.*d|\n", 10, 10, 124 * n);
	printf("===\n");
	ft_printf("|%-*.*d|\n", 1, 10, INT_MAX * n);
	   printf("|%-*.*d|\n", 1, 10, INT_MAX * n);
	printf("===\n");
	ft_printf("|%*.*d|\n", 1, 16, -INT_MAX - 1);
	   printf("|%*.*d|\n", 1, 16, -INT_MAX - 1);
	printf("===\n");
	// ???????????????????????
	// ft_printf("|%*.*d|\n", 1, 10, INT_MIN);
	//    printf("|%*.*d|\n", 1, 10, INT_MIN);
	// printf("===\n");
	ft_printf("|%*d|\n", 10, 123 * n);
	   printf("|%*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%*d|\n", 1, 123 * n);
	   printf("|%*d|\n", 1, 124 * n);
	printf("===\n");
	ft_printf("|%*d|\n", 3, 123 * n);
	   printf("|%*d|\n", 3, 124 * n);
	printf("===\n");
	ft_printf("|%*d|\n", 4, 123 * n);
	   printf("|%*d|\n", 4, 124 * n);
	printf("===\n");
	ft_printf("|%-*d|\n", 10, 123 * n);
	   printf("|%-*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%-*.*d|\n", 3, 0, 123 * n);
	   printf("|%-*.*d|\n", 3, 0, 124 * n);
	printf("===\n");
	ft_printf("|%-*d|\n", 4, 123 * n);
	   printf("|%-*d|\n", 4, 124 * n);
	printf("===\n");
	ft_printf("|%-*d|\n", 5, 123 * n);
	   printf("|%-*d|\n", 5, 124 * n);
	printf("===\n");
	ft_printf("|%-*d|\n", 3, -123 * n);
	   printf("|%-*d|\n", 3, -124 * n);
	printf("===\n");
	ft_printf("|%-*d|\n", 4, -123 * n);
	   printf("|%-*d|\n", 4, -124 * n);
	printf("===\n");
	ft_printf("|%----*d|\n", 10, 123 * n);
	   printf("|%----*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%-----*d|\n", 10, 123 * n);
	   printf("|%-----*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%-------------.*d|\n", 10, 123 * n);
	   printf("|%-------------.*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 10, 123 * n);
	   printf("|%0*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 1, 123 * n);
	   printf("|%0*d|\n", 1, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 3, 123 * n);
	   printf("|%0*d|\n", 3, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 4, 123 * n);
	   printf("|%0*d|\n", 4, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 10, 123 * n);
	   printf("|%0*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 3, 123 * n);
	   printf("|%0*d|\n", 3, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 4, 123 * n);
	   printf("|%0*d|\n", 4, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 5, 123 * n);
	   printf("|%0*d|\n", 5, 124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 3, -123 * n);
	   printf("|%0*d|\n", 3, -124 * n);
	printf("===\n");
	ft_printf("|%0*d|\n", 4, -123 * n);
	   printf("|%0*d|\n", 4, -124 * n);
	printf("===\n");
	ft_printf("|%00000*d|\n", 10, 123 * n);
	   printf("|%00000*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%000000000000000*d|\n", 10, 123 * n);
	   printf("|%000000000000000*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%000000000000.*d|\n", 10, 123 * n);
	   printf("|%000000000000.*d|\n", 10, 124 * n);
	printf("===\n");
	ft_printf("|%0000010.d|\n", 123);
	   printf("|%0000010.d|\n", 124);
	printf("===\n");
	ft_printf("|%10.d|\n", 123);
	   printf("|%10.d|\n", 124);
	printf("===\n");
	ft_printf("|%0000010d|\n", 123);
	   printf("|%0000010d|\n", 124);
	printf("===\n");
	ft_printf("|%00000d|\n", 123);
	   printf("|%00000d|\n", 124);
	printf("===\n");
	ft_printf("|%0000010.6d|\n", 123);
	   printf("|%0000010.6d|\n", 124);
	printf("===\n");
	ft_printf("|%010.1d|\n", 123);
	   printf("|%010.1d|\n", 124);
	printf("===\n");
	ft_printf("|%010.0d|\n", 123);
	   printf("|%010.0d|\n", 124);
	printf("===\n");
	ft_printf("|%-.*d|\n", -10, 123);
	   printf("|%-.*d|\n", -10, 124);
	printf("===\n");
	ft_printf("|%-.*d|\n", 10, 123);
	   printf("|%-.*d|\n", 10, 124);
	printf("===\n");
	ft_printf("|%010.1d|\n", 123);
	   printf("|%010.1d|\n", 124);
	printf("===\n");
	ft_printf("|%.*d|\n", -10, 123);
	   printf("|%.*d|\n", -10, 124);
	printf("===\n");
	ft_printf("|%0.*d|\n", -10, 123);
	   printf("|%0.*d|\n", -10, 124);
	printf("===\n");
	ft_printf("|%010.*d|\n", -10, 123);
	   printf("|%010.*d|\n", -10, 124);
	printf("===\n");
	ft_printf("|%010.*d|\n", -1, 123);
	   printf("|%010.*d|\n", -1, 124);
	printf("===\n");
	ft_printf("|%010.*d|\n", -0, 123);
	   printf("|%010.*d|\n", -0, 124);
	printf("===\n");
	ft_printf("|%010.*d|\n", 0, 123);
	   printf("|%010.*d|\n", 0, 124);
	printf("===\n");
	ft_printf("|%10.*d|\n", 1, 123);
	   printf("|%10.*d|\n", 1, 124);
	printf("===\n");
	ft_printf("|%0000010.0d|\n", 123);
	   printf("|%0000010.0d|\n", 124);
	printf("===\n");
	ft_printf("|%10.0d|\n", 123);
	   printf("|%10.0d|\n", 124);
	printf("===\n");
	ft_printf("|%0.0d|\n", 123);
	   printf("|%0.0d|\n", 124);
	printf("===\n");
	ft_printf("|%0000010.*d|\n", 0, 123);
	   printf("|%0000010.*d|\n", 0, 124);
	printf("===\n");
	ft_printf("|%d|\n", -INT_MAX - 1);
	   printf("|%d|\n", -INT_MAX - 1);
	printf("===\n");
	ft_printf("|%d|\n", -INT_MAX);
	   printf("|%d|\n", -INT_MAX);
	printf("===\n");
	ft_printf("|%d|\n", INT_MAX);
	   printf("|%d|\n", INT_MAX);
	printf("===\n");
	ft_printf("|%d|\n", (int)INT_MIN);
	   printf("|%d|\n", (int)INT_MIN);
	printf("===\n");
	ft_printf("|%d|\n", (int)-INT_MIN);
	   printf("|%d|\n", (int)-INT_MIN);
	printf("===\n");
	int ft_z = 0;
	int z = 0;
	ft_z = ft_printf("|%07d|\n", -54);
		z =    printf("|%07d|\n", -54);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);
	ft_z = ft_printf("|%06d|\n", -54);
		z =    printf("|%06d|\n", -54);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);

	ft_z = ft_printf("|%04d|\n", -54);
		z =    printf("|%04d|\n", -54);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);
	ft_z = ft_printf("|%05d|\n", -54);
		z =    printf("|%05d|\n", -54);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);
	printf("===\n");
	ft_z = ft_printf("|%03d|\n", -54);
		z =    printf("|%03d|\n", -54);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);
	printf("===\n");
	ft_z = ft_printf("|%02d|\n", -54);
		z =    printf("|%02d|\n", -54);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);
	printf("===\n");
	ft_z = ft_printf("|%01d|\n", -54);
		z =    printf("|%01d|\n", -54);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);
	ft_z = ft_printf("|%02d|\n", -543);
		z =    printf("|%02d|\n", -543);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);
	printf("===\n");
	ft_z = ft_printf("|%7d|\n", -14);
		z =    printf("|%7d|\n", -14);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);
	printf("===\n");
	ft_z = ft_printf("|%.7d|\n", -14);
		z =    printf("|%.7d|\n", -14);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);
	ft_z = ft_printf("|%-8.5d|\n", 34);
		z =    printf("|%-8.5d|\n", 34);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);
	
	ft_z = ft_printf("|%-8.4d|\n", 34);
		z =    printf("|%-8.4d|\n", 34);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);

	ft_z = ft_printf("|%-8.3d|\n", 34);
		z =    printf("|%-8.3d|\n", 34);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);

	ft_z = ft_printf("|%-8.2d|\n", 34);
		z =    printf("|%-8.2d|\n", 34);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);

	ft_z = ft_printf("|%-8.1d|\n", 34);
		z =    printf("|%-8.1d|\n", 34);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);

	ft_z = ft_printf("|%-8.0d|\n", 34);
		z =    printf("|%-8.0d|\n", 34);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);

	ft_z = ft_printf("|%-7.5d|\n", 34);
		z =    printf("|%-7.5d|\n", 34);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);

	ft_z = ft_printf("|%-6.5d|\n", 34);
		z =    printf("|%-6.5d|\n", 34);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);

	ft_z = ft_printf("|%-5.5d|\n", 34);
		z =    printf("|%-5.5d|\n", 34);
	printf("ft_z == %d\n   z == %d\n", ft_z, z);
	ft_printf("|%-------------.*d, %d, %d, 1.4%d, 4.1%d1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./!@#$^&*()_+QWERTYUIOP{}ASDFGHJKL:ZXCVBNM<>?\t\f|\n", 10, 123, 0, -1234567890, -42, -21);
	   printf("|%-------------.*d, %d, %d, 1.4%d, 4.1%d1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./!@#$^&*()_+QWERTYUIOP{}ASDFGHJKL:ZXCVBNM<>?\t\f|\n", 10, 123, 0, -1234567890, -42, -21);
	printf("===\n");
}

void		test_c()
{
	ft_printf("|%3c|\n", 'a');
		printf("|%3c|\n", 'a');
	ft_printf("|%1c|\n", 'a');
		printf("|%1c|\n", 'a');
	ft_printf("|%2c|\n", 'a');
		printf("|%2c|\n", 'a');
	ft_printf("|%-3c|\n", 'a');
		printf("|%-3c|\n", 'a');
	ft_printf("|%-1c|\n", 'a');
		printf("|%-1c|\n", 'a');
	ft_printf("|%-c|\n", 'a');
		printf("|%-c|\n", 'a');
	ft_printf("|%c|\n", 'a');
		printf("|%c|\n", 'a');
	ft_printf("|%-10c|\n", 'a');
		printf("|%-10c|\n", 'a');
	ft_printf("|%c, %-c, %c|\n", 'a', 'b', 'c');
		printf("|%c, %-c, %c|\n", 'a', 'b', 'c');
	ft_printf("|%c, %d, %c, %d|\n", 'a', 1, 'b', 2);
		printf("|%c, %d, %c, %d|\n", 'a', 1, 'b', 2);
	ft_printf("|%c|\n", (char)-130);
		printf("|%c|\n", (char)-130);
	ft_printf("|%c|\n", (char)-200);
		printf("|%c|\n", (char)-200);
	ft_printf("|%c|\n", (char)-129);
		printf("|%c|\n", (char)-129);
	ft_printf("|%c|\n", 128);
		printf("|%c|\n", 128);
	ft_printf("|%c|\n", 131);
		printf("|%c|\n", 131);
}

void		test_s()
{
	ft_printf("|%s|\n", "hello");
	printf("|%s|\n", "hello");
	printf("===\n");
	ft_printf("|%s%s%s|\n", "print", "", "f");
		printf("|%s%s%s|\n", "print", "", "f");
	printf("===\n");
	ft_printf("|%s%s%c|\n", "lo", NULL, 'l');
		printf("|%s%s%c|\n", "lo", NULL, 'l');
	printf("===\n");
	ft_printf("|%.0s|\n", NULL);
		printf("|%.0s|\n", NULL);
	printf("===\n");
	ft_printf("|%.1s|\n", NULL);
		printf("|%.1s|\n", NULL);
	printf("===\n");
	ft_printf("|%.2s|\n", NULL);
		printf("|%.2s|\n", NULL);
	printf("===\n");
	ft_printf("|%.3s|\n", NULL);
		printf("|%.3s|\n", NULL);
	printf("===\n");
	ft_printf("|%.4s|\n", NULL);
		printf("|%.4s|\n", NULL);
	printf("===\n");
	ft_printf("|%.5s|\n", NULL);
		printf("|%.5s|\n", NULL);
	printf("===\n");
	ft_printf("|%.6s|\n", NULL);
		printf("|%.6s|\n", NULL);
	printf("===\n");
	ft_printf("|%.7s|\n", NULL);
		printf("|%.7s|\n", NULL);
	printf("===\n");
	ft_printf("|%1.0s|\n", NULL);
		printf("|%1.0s|\n", NULL);
	printf("===\n");
	ft_printf("|%2.1s|\n", NULL);
		printf("|%2.1s|\n", NULL);
	printf("===\n");
	ft_printf("|%3.2s|\n", NULL);
		printf("|%3.2s|\n", NULL);
	printf("===\n");
	ft_printf("|%4.3s|\n", NULL);
		printf("|%4.3s|\n", NULL);
	printf("===\n");
	ft_printf("|%5.4s|\n", NULL);
		printf("|%5.4s|\n", NULL);
	printf("===\n");
	ft_printf("|%6.5s|\n", NULL);
		printf("|%6.5s|\n", NULL);
	printf("===\n");
	ft_printf("|%7.6s|\n", NULL);
		printf("|%7.6s|\n", NULL);
	printf("===\n");
	ft_printf("|%8.7s|\n", NULL);
		printf("|%8.7s|\n", NULL);
	printf("===\n");
	ft_printf("|%9.7s|\n", NULL);
		printf("|%9.7s|\n", NULL);
	printf("===\n");
	ft_printf("|%9.7s|\n", NULL);
		printf("|%9.7s|\n", NULL);
	printf("===\n");
	ft_printf("|%10.7s|\n", NULL);
		printf("|%10.7s|\n", NULL);
	printf("===\n");
	ft_printf("|%.20s|\n", NULL);
		printf("|%.20s|\n", NULL);
	printf("===\n");
	ft_printf("|%1.20s|\n", NULL);
		printf("|%1.20s|\n", NULL);
	printf("===\n");
	ft_printf("|%10.20s|\n", NULL);
		printf("|%10.20s|\n", NULL);
	printf("===\n");
	ft_printf("|%10.5s|\n", NULL);
		printf("|%10.5s|\n", NULL);
	printf("===\n");
	ft_printf("|%10.6s|\n", NULL);
		printf("|%10.6s|\n", NULL);
	printf("===\n");
	ft_printf("|%10.7s|\n", NULL);
		printf("|%10.7s|\n", NULL);
	printf("===\n");
	ft_printf("|%10.8s|\n", NULL);
		printf("|%10.8s|\n", NULL);
	printf("===\n");
	ft_printf("|%10.9s|\n", NULL);
		printf("|%10.9s|\n", NULL);
	printf("===\n");
	ft_printf("|%10.10s|\n", NULL);
		printf("|%10.10s|\n", NULL);
	printf("=======\n");
	ft_printf("|%1s|\n", NULL);
		printf("|%1s|\n", NULL);
	printf("=======\n");
	ft_printf("|%2s|\n", NULL);
		printf("|%2s|\n", NULL);
	printf("=======\n");
	ft_printf("|%3s|\n", NULL);
		printf("|%3s|\n", NULL);
	printf("=======\n");
	ft_printf("|%4s|\n", NULL);
		printf("|%4s|\n", NULL);
	printf("=======\n");
	ft_printf("|%5s|\n", NULL);
		printf("|%5s|\n", NULL);
	printf("=======\n");
	ft_printf("|%6s|\n", NULL);
		printf("|%6s|\n", NULL);
	printf("=======\n");
	ft_printf("|%7s|\n", NULL);
		printf("|%7s|\n", NULL);
	printf("=======\n");
	ft_printf("|%s_%d|\n", "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%X", 42);
		printf("|%s_%d|\n", "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%X", 42);
	ft_printf("|%s|\n", "%");
		printf("|%s|\n", "%");
	ft_printf("|%8s|\n", "12345");
		printf("|%8s|\n", "12345");
	ft_printf("|%8.6s|\n", "12345");
		printf("|%8.6s|\n", "12345");
	ft_printf("|%8.6s|\n", "1234");
		printf("|%8.6s|\n", "1234");
	ft_printf("|%8.5s|\n", "1234");
		printf("|%8.5s|\n", "1234");
	ft_printf("|%8.4s|\n", "1234");
		printf("|%8.4s|\n", "1234");
	ft_printf("|%8.3s|\n", "1234");
		printf("|%8.3s|\n", "1234");
	ft_printf("|%8.2s|\n", "1234");
		printf("|%8.2s|\n", "1234");
	ft_printf("|%8.1s|\n", "1234");
		printf("|%8.1s|\n", "1234");
	ft_printf("|%8.0s|\n", "1234");
		printf("|%8.0s|\n", "1234");
	ft_printf("|%4s|\n", "1234");
		printf("|%4s|\n", "1234");
	ft_printf("|%1s|\n", "1234");
		printf("|%1s|\n", "1234");
	ft_printf("|%3.5s|\n", "1234");
		printf("|%3.5s|\n", "1234");
	ft_printf("|%8.6s|\n", "1234");
		printf("|%8.6s|\n", "1234");
	ft_printf("|%-1s|\n", "1234");
		printf("|%-1s|\n", "1234");
	ft_printf("|%-2s|\n", "1234");
		printf("|%-2s|\n", "1234");
	ft_printf("|%-3s|\n", "1234");
		printf("|%-3s|\n", "1234");
	ft_printf("|%-4s|\n", "1234");
		printf("|%-4s|\n", "1234");
	ft_printf("|%-5s|\n", "1234");
		printf("|%-5s|\n", "1234");
	ft_printf("|%-6s|\n", "1234");
		printf("|%-6s|\n", "1234");
	ft_printf("|%-7s|\n", "1234");
		printf("|%-7s|\n", "1234");
	ft_printf("|%-8s|\n", "1234");
		printf("|%-8s|\n", "1234");
	ft_printf("|%-9s|\n", "1234");
		printf("|%-9s|\n", "1234");
	ft_printf("|%-10.1s|\n", "1234");
		printf("|%-10.1s|\n", "1234");
	ft_printf("|%-10.5s|\n", "1234");
		printf("|%-10.5s|\n", "1234");
	ft_printf("|%-10.4s|\n", "1234");
		printf("|%-10.4s|\n", "1234");
	ft_printf("|%-.1s|\n", "1234");
		printf("|%-.1s|\n", "1234");
	ft_printf("|%-.4s|\n", "1234");
		printf("|%-.4s|\n", "1234");
	ft_printf("|%-.5s|\n", "1234");
		printf("|%-.5s|\n", "1234");
	ft_printf("|%-9.0s|\n", "1234");
		printf("|%-9.0s|\n", "1234");
	ft_printf("|%-1.10s|\n", "1234");
		printf("|%-1.10s|\n", "1234");
	ft_printf("|%-1.3s|\n", "1234");
		printf("|%-1.3s|\n", "1234");
	ft_printf("|%-1.4s|\n", "1234");
		printf("|%-1.4s|\n", "1234");
	ft_printf("|%-1.5s|\n", "1234");
		printf("|%-1.5s|\n", "1234");
	ft_printf("|%-3.3s|\n", "1234");
		printf("|%-3.3s|\n", "1234");
	ft_printf("|%-3.4s|\n", "1234");
		printf("|%-3.4s|\n", "1234");
	ft_printf("|%-4.3s|\n", "1234");
		printf("|%-4.3s|\n", "1234");
	ft_printf("|%-4.4s|\n", "1234");
		printf("|%-4.4s|\n", "1234");
	char str[9] = {'H', 'e', 'l', 'l', 'o', '!', '!', '!', '!'};
	ft_printf("|%.14s|\n", str);
		printf("|%.14s|\n", str);
	ft_printf("|%.9s|\n", str);
		printf("|%.9s|\n", str);
	ft_printf("|%.8s|\n", str);
		printf("|%.8s|\n", str);
	ft_printf("|%.5s|\n", str);
		printf("|%.5s|\n", str);
}

void	test_x()
{
	ft_printf("|%05.7x|\n", 1234);
		printf("|%05.7x|\n", 1234);
	ft_printf("|%0x|\n", 1234);
		printf("|%0x|\n", 1234);
	ft_printf("|%05.7x|\n", 1234);
		printf("|%05.7x|\n", 1234);
	ft_printf("|%05.X|\n", 1234);
		printf("|%05.X|\n", 1234);
	ft_printf("|%-5.7X|\n", 1234);
		printf("|%-5.7X|\n", 1234);
	ft_printf("|%x|\n", 4294967295u);
		printf("|%x|\n", 4294967295u);
}

void	test_crazy()
{

	// ft_printf("|%", 1);
	// printf("\n");
	// 	printf("|%", 1);
	// printf("\n");
	// int ft_z = 0;
	// int z = 0;
	// ft_z = ft_printf("|%d %z0%dnbfxgnstrh %d 7|\n", 1, 9, 2);
	// 	z =    printf("|%d %z0%dnbfxgnstrh %d 7|\n", 1, 9, 2);
	// printf("ft_z == %d\n   z == %d\n", ft_z, z);
	// ft_printf("|%-010d|\n", 124);
	// 	printf("|%-010d|\n", 124);
	// ft_printf("|d|\n", 124);
	// 	printf("|d|\n", 124);
	// ft_printf("|%d|\n", 124, 1);
	// 	printf("|%d|\n", 124, 1);
	// ft_printf("|%d|\n");
	// 	printf("|%d|\n");
	// ft_printf("|%s|\n", 1);
		// printf("|%s|\n", 1);

	// ft_printf("|%05%|\n");
		// printf("|%05%|\n");
	// ft_printf("|%05c|\n", 'u');
	// 	printf("|%05c|\n", 'u');
	// ft_printf("%0-6.4%\n");
	// 	printf("%0-6.4%\n");
	// ft_printf("%01%\n");
	// 	printf("%01%\n");
	// ft_printf("%05.3%\n");
	// 	printf("%05.3%\n");
	// ft_printf("%05.7%\n");
	// 	printf("%05.7%\n");
}

void		test_p()
{
	int number = 42;
	int *p_number = &number;

	ft_printf("|%020.10p|\n", (void *)p_number);
		printf("|%020.10p|\n", (void *)p_number);
	printf("=======\n");
	ft_printf("|%20p|\n", (void *)p_number);
		printf("|%20p|\n", (void *)p_number);
	printf("=======\n");
	ft_printf("|%0.8p|\n", (void *)p_number);
		printf("|%0.8p|\n", (void *)p_number);
	printf("=======\n");
	ft_printf("|%.8p|\n", (void *)p_number);
		printf("|%.8p|\n", (void *)p_number);
	printf("=======\n");
	ft_printf("|%020p|\n", (void *)p_number);
		printf("|%020p|\n", (void *)p_number);
	printf("=======\n");
	ft_printf("|%020p|\n", (void *)p_number);
		printf("|%020p|\n", (void *)p_number);
	printf("=======\n");
	ft_printf("|%020p|\n", (void *)p_number);
		printf("|%020p|\n", (void *)p_number);
	printf("=======\n");
	ft_printf("|%-20p|\n", (void *)p_number);
		printf("|%-20p|\n", (void *)p_number);
	printf("=======\n");
	ft_printf("|%p|\n", (void *)p_number);
		printf("|%p|\n", (void *)p_number);
	printf("=======\n");
	ft_printf("|%20p|\n", (void *)p_number);
		printf("|%20p|\n", (void *)p_number);
	printf("=======\n");
	ft_printf("|%-20p|\n", (void *)p_number);
		printf("|%-20p|\n", (void *)p_number);
	printf("=======\n");
	ft_printf("|%.20p|\n", (void *)p_number);
		printf("|%.20p|\n", (void *)p_number);
	printf("=======\n");
	ft_printf("|%020p|\n", (void *)p_number);
		printf("|%020p|\n", (void *)p_number);
	printf("=======\n");
}


int		main(void)
{
	// int ft_z = 0;
	int z = 0;
	// Проверить!!!
	// printf("%D\n", 42);
	// невалидный случай
	// ft_printf("%0z5.7zd\n", 3);
	// 	printf("%0z5.7zd\n", 3);

	// test_d(-1);
	// test_d(1);
	// test_c();
	// test_s();
	// test_x();
	// test_p();
	// test_crazy();

	// scanf("%d", &z);
	return (0);
}