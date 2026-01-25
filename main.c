/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:29:48 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/25 01:49:14 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printfft.h"

int	main(void)
{
	const int	n = 'A';
	const char	*str = "fortytwo";

	ft_printf("test\n");
	ft_printf("%d\n", n);
	ft_printf("%i\n", n);
	ft_printf("%c\n", n);
	ft_printf("%u\n", n);
	ft_printf("%x\n", n);
	ft_printf("%X\n", n);
	ft_printf("%%\n");
	ft_printf("%s\n", str);
	ft_printf("%p\n", str);
	return (0);
}
