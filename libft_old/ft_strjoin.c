/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 20:40:02 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/07 19:15:53 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len;
	size_t	len1;
	size_t	len2;
	char	*r;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	len = len1 + len2;
	r = ft_calloc(len + 1, sizeof(char));
	if (!r)
		return (0);
	ft_memcpy(r, s1, len1);
	ft_memcpy(r + len1, s2, len2);
	return (r);
}
