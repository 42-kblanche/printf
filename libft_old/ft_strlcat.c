/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:19:48 by kblanche          #+#    #+#             */
/*   Updated: 2025/11/09 00:40:05 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = dst_size;
	if (size <= 0)
		return (src_size);
	while (i < size - 1 && src[i - dst_size] != '\0')
	{
		dst[i] = src[i - dst_size];
		++i;
	}
	dst[i] = '\0';
	if (size < dst_size)
		return (size + src_size);
	return (dst_size + src_size);
}
