/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_destroy.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 17:37:43 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/08 17:41:04 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stringft.h"
#include <stdlib.h>

void	ft_string_destroy(t_string *self)
{
	free(self->str);
	self->str = NULL;
	self->max_size = 0;
}
