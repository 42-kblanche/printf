/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:29:48 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/28 21:17:02 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printfft.h"
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	// printf("EXPECTED [ %c %c %c ]\n", '0', 0, '1');
	ft_printf("OUTPUT   [ %c %c %c ]\n", '0', 0, '1');
	// printf("EXPECTED [ %c %c %c ]\n", '2', '1', 0);
	ft_printf("OUTPUT   [ %c %c %c ]\n", '2', '1', 0);
	// printf("EXPECTED [ %c %c %c ]\n", 0, '1', '2');
	ft_printf("OUTPUT   [ %c %c %c ]\n", 0, '1', '2');
	return (0);
}
