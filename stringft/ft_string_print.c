/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:59:17 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/27 21:36:19 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stringft.h"
#include "../libft.h"

void	ft_string_print(const t_string *self, int fd)
{
	t_string	out;

	ft_string_init(&out);
	ft_string_assign(&out, "string: [");
	if (self->str)
		ft_string_append(&out, self->str);
	else
		ft_string_append(&out, "(null)");
	ft_string_append(&out, "]\nsize: ");
	ft_string_append_int(&out, self->max_size);
	ft_string_append(&out, "\n");
	ft_putstr_fd(out.str, fd);
	ft_string_destroy(&out);
}
