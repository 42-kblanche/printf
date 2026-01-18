/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_append_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 19:16:25 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/18 20:26:57 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stringft.h"
#include "../libft.h"

void	ft_string_append_int(t_string *self, const int n)
{
	char	*str;

	str = ft_itoa(n);
	ft_string_append(self, str);
}

void	ft_string_append_percent(t_string *self)
{
	const char	*str = "%";

	ft_string_append(self, str);
}

void	ft_string_append_pointer(t_string *self, const void *p)
{
	char	*str;

	str = ft_ptoh(p);
	ft_string_append(self, str);
}

void	ft_string_append_unsigned(t_string *self, const unsigned int n)
{
	char	*str;

	str = ft_itoa(n);
	ft_string_append(self, str);
}
