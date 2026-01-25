/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:58:49 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/25 02:03:11 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printfft.h"
#include "../libft.h"
#include <stddef.h>

int	ft_printf(const char *str, ...)
{
	va_list		args;
	t_string	out;
	int			ret;
	size_t		cursor;

	va_start(args, str);
	cursor = 0;
	ft_string_init_str(&out, str);
	while (ft_strfind(out.str + cursor, "%"))
		ft_printf_parse(&out, &cursor, &args);
	ft_putstr_fd(out.str, PRINTF_OUT);
	ret = ft_strlen(str);
	return (ret);
}
