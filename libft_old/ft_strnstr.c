/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 18:35:27 by kblanche          #+#    #+#             */
/*   Updated: 2025/11/11 20:13:25 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	needle_size;
	size_t	haystack_size;
	int		r;

	i = 0;
	needle_size = ft_strlen(needle);
	haystack_size = ft_strlen(haystack);
	if (needle_size == 0)
		return ((char *)haystack);
	if (haystack_size == 0 || n == 0 || n < needle_size)
		return (0);
	while (i + needle_size <= haystack_size && i + needle_size <= n)
	{
		if (haystack[i] == *needle)
		{
			r = ft_strncmp(haystack + i, needle, needle_size);
			if (r == 0)
				return ((char *)(haystack + i));
		}
		++i;
	}
	return (0);
}
