/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:29:48 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/18 20:57:55 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"

int	main(void)
{
	t_string	test;

	ft_string_init_str(&test, "test\n");
	ft_string_print(&test, 1);
	ft_string_assign(&test, NULL);
	ft_string_print(&test, 1);
	ft_string_append_int(&test, 42);
	ft_string_print(&test, 1);
	ft_string_destroy(&test);
	ft_string_print(&test, 1);
	return (0);
}
