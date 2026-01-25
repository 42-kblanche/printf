/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_parse_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 01:15:31 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/25 01:57:30 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../printfft.h"

void	ft_printf_parse_unsigned(t_string *out, size_t *cursor, va_list *args)
{
	unsigned int	n;

	n = va_arg(*args, unsigned int);
	ft_string_erase(out, *cursor, 2);
	*cursor += ft_string_insert_uint(out, *cursor, n);
}

void	ft_printf_parse_uphex(t_string *out, size_t *cursor, va_list *args)
{
	char	n;

	n = va_arg(*args, int);
	ft_string_erase(out, *cursor, 2);
	*cursor += ft_string_insert_hex_up(out, *cursor, n);
}

void	ft_printf_parse_lohex(t_string *out, size_t *cursor, va_list *args)
{
	int	n;

	n = va_arg(*args, int);
	ft_string_erase(out, *cursor, 2);
	*cursor += ft_string_insert_hex_lo(out, *cursor, n);
}

void	ft_printf_parse_percent(t_string *out, size_t *cursor)
{
	ft_string_erase(out, *cursor, 2);
	*cursor += ft_string_insert_percent(out, *cursor);
}
