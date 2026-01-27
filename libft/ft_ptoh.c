/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 00:22:31 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/27 22:05:02 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdint.h>
#define PTOH_LEN 10
#define NIL_STR "(nil)"
#define HEX_ARR "0123456789abcdef"
#define HEX_ARR_LEN 16

char	*ft_ptoh(const void *ptr)
{
	char		*r;
	char		str[PTOH_LEN + 1];
	uintptr_t	temp;
	size_t		i;
	const char	hex_arr[] = HEX_ARR;

	if (!ptr)
	{
		r = ft_strdup(NIL_STR);
		return (r);
	}
	temp = (uintptr_t)ptr;
	str[PTOH_LEN] = '\0';
	i = PTOH_LEN - 1;
	while (temp > 0 && i > 0)
	{
		str[i] = hex_arr[(temp % HEX_ARR_LEN)];
		temp /= HEX_ARR_LEN;
		--i;
	}
	str[i--] = 'x';
	str[i] = '0';
	r = ft_strdup(str + i);
	return (r);
}
