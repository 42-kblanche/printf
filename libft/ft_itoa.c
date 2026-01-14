/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 00:22:31 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/14 18:17:05 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <malloc.h>

size_t	is_nb_negative(int n)
{
	if (n >= 0)
		return (0);
	else
		return (1);
}

size_t	nb_len(int n)
{
	size_t	r;

	if (n == 0)
		return (1);
	r = 0;
	while (n > 0)
	{
		n /= 10;
		++r;
	}
	return (r);
}

char	*ft_itoa(int n)
{
	char	*r;
	size_t	i;
	size_t	is_negative;

	if (n == -2147483648)
	{
		r = ft_strdup("-2147483648");
		return (r);
	}
	is_negative = is_nb_negative(n);
	if (is_negative)
		n *= -1;
	i = nb_len(n);
	r = (char *)ft_calloc(i + is_negative + 1, sizeof(char));
	if (!r)
		return (0);
	if (is_negative)
		r[0] = '-';
	while (i > 0)
	{
		--i;
		r[i + is_negative] = '0' + (n % 10);
		n /= 10;
	}
	return (r);
}
