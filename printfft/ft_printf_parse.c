/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 01:15:31 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/27 19:26:51 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printfft.h"
#include "../libft.h"

void	ft_printf_parse(t_string *out, size_t *cursor, va_list *args)
{
	char	tmp;

	*cursor += ft_strfind(out->str + *cursor, "%");
	tmp = out->str[*cursor + 1];
	if (tmp == PRINT_CHAR)
		ft_printf_parse_char(out, cursor, args);
	if (tmp == PRINT_STRING)
		ft_printf_parse_string(out, cursor, args);
	if (tmp == PRINT_POINTER)
		ft_printf_parse_pointer(out, cursor, args);
	if (tmp == PRINT_DECIMAL)
		ft_printf_parse_integer(out, cursor, args);
	if (tmp == PRINT_INTEGER)
		ft_printf_parse_integer(out, cursor, args);
	if (tmp == PRINT_UNSIGNED)
		ft_printf_parse_unsigned(out, cursor, args);
	if (tmp == PRINT_UPHEX)
		ft_printf_parse_uphex(out, cursor, args);
	if (tmp == PRINT_LOHEX)
		ft_printf_parse_lohex(out, cursor, args);
	if (tmp == PRINT_PERCENT)
		ft_printf_parse_percent(out, cursor);
	else
		++*cursor;
}

void	ft_printf_parse_char(t_string *out, size_t *cursor, va_list *args)
{
	char	c;

	c = va_arg(*args, int);
	ft_string_erase(out, *cursor, 2);
	*cursor += ft_string_insert_char(out, *cursor, c);
}

void	ft_printf_parse_string(t_string *out, size_t *cursor, va_list *args)
{
	char	*str;

	str = va_arg(*args, char *);
	ft_string_erase(out, *cursor, 2);
	*cursor += ft_string_insert(out, *cursor, str);
}

void	ft_printf_parse_pointer(t_string *out, size_t *cursor, va_list *args)
{
	void	*p;

	p = va_arg(*args, void *);
	ft_string_erase(out, *cursor, 2);
	*cursor += ft_string_insert_ptr(out, *cursor, p);
}

void	ft_printf_parse_integer(t_string *out, size_t *cursor, va_list *args)
{
	int	n;

	n = va_arg(*args, int);
	ft_string_erase(out, *cursor, 2);
	*cursor += ft_string_insert_int(out, *cursor, n);
}
