/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_find.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:08:49 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/08 17:56:44 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stringft.h"
#include "../libft.h"

ssize_t	ft_string_find(t_string *self, const char *str)
{
	size_t	i;
	size_t	self_len;
	size_t	str_len;
	int		r;

	i = 0;
	self_len = ft_strlen(self->str);
	str_len = ft_strlen(str);
	if (str_len > self_len)
		return (-1);
	while (i + str_len <= self_len)
	{
		if (self->str[i] == str[0])
		{
			r = ft_strncmp(self->str + i, str, str_len);
			if (r == 0)
				return (i);
		}
	}
	return (-1);
}
