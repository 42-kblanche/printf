/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:39:25 by kblanche          #+#    #+#             */
/*   Updated: 2025/11/14 23:41:01 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	size_t	t;

	i = 0;
	while (i < n)
	{
		if (dest < src)
			t = i;
		else
			t = n - i - 1;
		((unsigned char *)dest)[t] = ((unsigned char *)src)[t];
		++i;
	}
	return (dest);
}
