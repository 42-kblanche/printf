/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:58:49 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/27 21:36:23 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printfft.h"
#include "../libft.h"
#include <stdarg.h>
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
	while (ft_strfind(out.str + cursor, "%") != -1)
		ft_printf_parse(&out, &cursor, &args);
	ft_putstr_fd(out.str, PRINTF_OUT);
	ret = ft_strlen(out.str);
	ft_string_destroy(&out);
	va_end(args);
	return (ret);
}
