/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoh.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 00:22:31 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/27 19:50:26 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#define ITOH_LEN 10
#define HEX_ARR "0123456789abcdef"
#define HEX_ARR_LEN 16

char	*ft_itoh(int n)
{
	char			*r;
	char			str[ITOH_LEN + 1];
	unsigned int	temp;
	size_t			i;
	const char		hex_arr[] = HEX_ARR;

	temp = (unsigned int)n;
	str[ITOH_LEN] = '\0';
	i = ITOH_LEN;
	while (temp > 0)
	{
		--i;
		str[i] = hex_arr[(temp % HEX_ARR_LEN)];
		temp /= HEX_ARR_LEN;
	}
	r = ft_strdup(str + i);
	return (r);
}
