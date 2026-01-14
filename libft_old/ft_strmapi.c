/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 20:52:58 by kblanche          #+#    #+#             */
/*   Updated: 2025/11/14 20:59:27 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*r;

	len = ft_strlen(s);
	r = (char *)ft_calloc(len + 1, sizeof(char));
	if (!r)
		return (0);
	i = 0;
	while (s[i])
	{
		r[i] = f(i, s[i]);
		++i;
	}
	return (r);
}
