/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:52:46 by kblanche          #+#    #+#             */
/*   Updated: 2025/11/08 22:45:15 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*p;

	i = n - 1;
	p = 0;
	while (i >= 0)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
		{
			p = (void *)s + i;
			return (p);
		}
		--i;
	}
	return (0);
}
