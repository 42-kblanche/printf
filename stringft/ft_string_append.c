/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_append.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:03:07 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/27 18:42:30 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stringft.h"
#include "../libft.h"
#include <stddef.h>

void	ft_string_append(t_string *self, const char *str)
{
	size_t	self_len;
	size_t	str_len;

	if (!str)
		return ;
	if (!self->str)
	{
		ft_string_init_str(self, str);
		return ;
	}
	self_len = ft_strlen(self->str);
	str_len = ft_strlen(str);
	while (self_len > self->max_size - str_len)
		ft_string_double_size(self);
	// ft_memcpy(self->str + self_len, str, str_len);
	ft_strlcpy(self->str + self_len, str, str_len + 1);
}

void	ft_string_append_char(t_string *self, const char c)
{
	char	str[2];

	str[0] = c;
	str[1] = '\0';
	ft_string_append(self, str);
}

void	ft_string_append_hex_lo(t_string *self, const int n)
{
	char	*str;

	str = ft_itoh(n);
	ft_strtolower(str);
	ft_string_append(self, str);
}

void	ft_string_append_hex_up(t_string *self, const int n)
{
	char	*str;

	str = ft_itoh(n);
	ft_strtoupper(str);
	ft_string_append(self, str);
}
