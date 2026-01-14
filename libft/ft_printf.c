/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:58:49 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/08 16:25:22 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdarg.h>

static int	count_pf_args(const char *str)
{
	int	i;
	int	ret;

	i = 0;
	ret = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			++ret;
			if (i > 0 && str[i - 1] == '%')
				ret -= 2;
		}
		++i;
	}
	return (ret);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		percent_count;
	int		ret;

	ret = ft_strlen(str);
	va_start(args, str);
	percent_count = count_pf_args(str);
	return (ret);
}
