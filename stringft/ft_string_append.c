/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_append.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:03:07 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/08 16:04:06 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stringft.h"
#include "../libft.h"

void	ft_string_append(t_string *self, const char *str)
{
	size_t	self_len;
	size_t	str_len;

	self_len = ft_strlen(self->str);
	str_len = ft_strlen(str);
	while (self_len > self->max_size - str_len)
		ft_string_double_size(self);
	ft_memcpy(self->str + self_len, str, str_len);
}
