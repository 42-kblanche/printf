/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 16:59:17 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/14 17:07:55 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stringft.h"
#include "../libft.h"

void	ft_string_print(const t_string *self, int fd)
{
	t_string	out;

	ft_string_assign(&out, "string: [");
	ft_string_append(&out, self->str);
	ft_string_append(&out, "]\nsize: ");
	ft_string_append_size(&out, self->max_size);
	ft_string_append(&out, "\n");
	ft_putstr_fd(out.str, fd);
}
