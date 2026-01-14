/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 00:22:31 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/14 19:15:04 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <malloc.h>

char	*ft_itoh(int n)
{
	char			*r;
	unsigned long	un;
	size_t			i;
	const char		hex_arr[] = "0123456789abcdef";

	un = (unsigned int)n;
	r = ft_calloc(50, sizeof(char));
	i = 0;
	if (!r)
		return (0);
	while (un > 0)
	{
		r[i] = hex_arr[(un % 16)];
		un /= 16;
		++i;
	}
	return (r);
}
