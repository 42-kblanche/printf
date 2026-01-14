/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_assign.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 16:11:31 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/08 17:34:23 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stringft.h"
#include "../libft.h"

t_string	*ft_string_assign(t_string *self, const char *str)
{
	size_t	str_len;

	str_len = ft_strlen(str);
	while (self->max_size < str_len)
		ft_string_double_size(self);
	ft_strlcpy(self->str, str, str_len);
	return (self);
}
