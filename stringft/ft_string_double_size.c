/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_double_size.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:04:58 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/08 16:06:26 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stringft.h"
#include "../libft.h"
#include <stdlib.h>

size_t	ft_string_double_size(t_string *self)
{
	char	*temp;

	if (self->max_size == 0)
		self->max_size = 127;
	else
		self->max_size *= 2;
	temp = malloc(self->max_size);
	if (self->str)
	{
		ft_memcpy(temp, self->str, ft_strlen(self->str));
		free(self->str);
	}
	self->str = temp;
	return (self->max_size);
}
