/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:29:48 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/27 22:31:39 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printfft.h"
#include <stdlib.h>
#define TEST_STRING "%% this is the test string %%\n\
these should be untouched : %d%p%c%u%i%s%x%X\n"

int	main(void)
{
	int		n;
	char	*str;

	ft_printf("test with 0:\n");
	n = 0;
	str = NULL;
	ft_printf("%%d %d %%d\n", n);
	ft_printf("%%i %i %%i\n", n);
	ft_printf("%%c %c %%c\n", n);
	ft_printf("%%u %u %%u\n", n);
	ft_printf("%%x %x %%x\n", n);
	ft_printf("%%X %X %%X\n", n);
	ft_printf("%%p %p %%p\n", str);
	ft_printf("%%s %s %%s\n", str);
	str = malloc(1);
	str[0] = 0;
	ft_printf("test empty string:[%s]\n", str);
	ft_printf("test with positive values:\n");
	n = 'A';
	ft_printf("%%d %d %%d\n", n);
	ft_printf("%%i %i %%i\n", n);
	ft_printf("%%c %c %%c\n", n);
	ft_printf("%%u %u %%u\n", n);
	ft_printf("%%x %x %%x\n", n);
	ft_printf("%%X %X %%X\n", n);
	ft_printf("%%p %p %%p\n", str);
	ft_printf("%%s %s %%s\n", TEST_STRING);
	ft_printf("test with negative values:\n");
	n = -42;
	ft_printf("%%d %d %%d\n", n);
	ft_printf("%%i %i %%i\n", n);
	ft_printf("%%c %c %%c\n", n);
	ft_printf("%%u %u %%u\n", n);
	ft_printf("%%x %x %%x\n", n);
	ft_printf("%%X %X %%X\n", n);
	// ft_printf("%%p %p %%p\n", n);
	// ft_printf("%%s %s %%s\n", n);
	free(str);
	return (0);
}
