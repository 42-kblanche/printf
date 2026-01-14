/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 17:45:52 by kblanche          #+#    #+#             */
/*   Updated: 2025/11/11 18:27:30 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	*sb;
	unsigned char	cb;

	i = 0;
	sb = (unsigned char *)s;
	cb = (unsigned char)c;
	while (sb[i] != '\0')
	{
		if (sb[i] == cb)
			return ((char *)s + i);
		++i;
	}
	if (sb[i] == cb)
		return ((char *)s + i);
	return (0);
}
