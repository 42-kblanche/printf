/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:29:48 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/14 16:56:19 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"
#include <stdio.h>

int	main(void)
{
	t_string	test;

	ft_string_init_str(&test, "test\n");
	printf("%s\tsize: %lu\n", test.str, test.max_size);
	ft_string_assign(&test, "assign ");
	printf("%s\tsize: %lu\n", test.str, test.max_size);
	ft_string_append(&test, "append\n");
	printf("%s\tsize: %lu\n", test.str, test.max_size);
	ft_string_destroy(&test);
	printf("%s\tsize: %lu\n", test.str, test.max_size);
	return (0);
}
