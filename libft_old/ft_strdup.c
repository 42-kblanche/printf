/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 17:59:38 by kblanche          #+#    #+#             */
/*   Updated: 2025/11/11 20:16:49 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*t;
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(s) + 1;
	t = (char *)ft_calloc(size, sizeof(char));
	if (!t)
		return (0);
	while (i < size)
	{
		t[i] = s[i];
		++i;
	}
	return (t);
}
