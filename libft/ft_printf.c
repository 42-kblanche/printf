/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:58:49 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/24 00:15:57 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "../stringft.h"
#include <stdarg.h>
#include <stddef.h>

static void	ft_printf_parse(t_string *out, size_t *cursor, va_list *args)
{
	*cursor = ft_strfind(out->str + *cursor, "%");
	if (out->str[*cursor + 1] == PRINT_CHAR)
	{
		ft_string_insert_char(out, *cursor, (int)va_arg(*args, int));
	}
}

static void	ft_printf_parse_char(t_string *out, size_t *cursor, va_list *args)
{
	char	str[2];

	str[0] = va_arg(*args, int);
	str[1] = '\0';
	ft_string_erase(out, *cursor, 2);
	ft_string_insert(out, *cursor, str);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	t_string	out;
	int			percent_count;
	int			ret;
	size_t		cursor;

	va_start(args, str);
	cursor = 0;
	ft_string_init_str(&out, str);
	while (ft_strfind(out.str + cursor, "%"))
		ft_printf_parse(&out, &cursor, &args);
	ret = ft_strlen(str);
	return (ret);
}
