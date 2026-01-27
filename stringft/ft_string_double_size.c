/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_double_size.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:04:58 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/27 22:00:52 by kblanche         ###   ########.fr       */
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
	temp = ft_calloc(self->max_size, 1);
	if (!temp)
	{
		free(self->str);
		self->str = NULL;
		return (0);
	}
	if (self->str)
		ft_memcpy(temp, self->str, ft_strlen(self->str));
	free(self->str);
	self->str = temp;
	return (self->max_size);
}
