/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:43:04 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/08 17:35:42 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stringft.h"
#include "../libft.h"

#include <stdlib.h>

t_string	*ft_string_init(t_string *self)
{
	self->max_size = 0;
	self->str = NULL;
	return (self);
}

t_string	*ft_string_init_str(t_string *self, char *str)
{
	size_t	str_len;

	str_len = ft_strlen(str);
	self->max_size = str_len;
	self->str = ft_calloc(str_len + 1, sizeof(char));
	ft_strlcpy(self->str, str, str_len + 1);
	return (self);
}
