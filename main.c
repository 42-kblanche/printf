/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:29:48 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/27 19:29:57 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printfft.h"

int	main(void)
{
	const int	n = 'A';
	const char	*str = "fortytwo";

	ft_printf("test\n");
	ft_printf("%%d %d %%d\n", n);
	ft_printf("%%i %i %%i\n", n);
	ft_printf("%%c %c %%c\n", n);
	ft_printf("%%u %u %%u\n", n);
	ft_printf("%%x %x %%x\n", n);
	ft_printf("%%X %X %%X\n", n);
	ft_printf("%%s %s %%s\n", str);
	ft_printf("%%p %p %%p\n", str);
	return (0);
}
