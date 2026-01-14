/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 22:20:18 by kblanche          #+#    #+#             */
/*   Updated: 2025/11/11 22:46:51 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s, const char *set)
{
	int		start;
	int		len;
	char	*r;

	start = 0;
	while (s[start] && ft_strchr(set, s[start]))
		++start;
	len = ft_strlen(s + start);
	while (len > 0 && ft_strchr(set, s[start + len - 1]))
		--len;
	r = ft_substr(s, start, len);
	return (r);
}
