/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:31:18 by kblanche          #+#    #+#             */
/*   Updated: 2025/11/11 19:17:53 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sb;
	unsigned char	cb;

	i = 0;
	sb = (unsigned char *)s;
	cb = (unsigned char)c;
	while (i < n)
	{
		if (sb[i] == cb)
			return (sb + i);
		++i;
	}
	return (0);
}
