/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_insert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 07:12:56 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/22 08:05:42 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../stringft.h"
#include <stddef.h>
#include <stdlib.h>

void	ft_string_insert(t_string *self, size_t index, const char *str)
{
	size_t	str_len;
	size_t	self_len;
	char	*tmp;

	self_len = ft_strlen(self->str);
	if (self_len < index)
		return ;
	str_len = ft_strlen(str);
	while (str_len >= self->max_size - self_len)
		ft_string_double_size(self);
	tmp = ft_strdup(self->str);
	self->str[index] = '\0';
	ft_string_append(self, str);
	ft_string_append(self, tmp + index);
	free(tmp);
}
