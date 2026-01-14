/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:36:46 by kblanche          #+#    #+#             */
/*   Updated: 2025/11/11 19:13:53 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*sb;
	unsigned char	cb;

	i = ft_strlen(s);
	sb = (unsigned char *)s;
	cb = (unsigned char)c;
	while (i > 0)
	{
		if (sb[i] == cb)
			return ((char *)s + i);
		--i;
	}
	if (sb[0] == cb)
		return ((char *)s);
	return (0);
}
