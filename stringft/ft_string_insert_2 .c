/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_insert_2 .c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 19:16:25 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/24 00:13:41 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stringft.h"
#include "../libft.h"

void	ft_string_insert_int(t_string *self, size_t index, const int n)
{
	char	*str;

	str = ft_itoa(n);
	ft_string_insert(self, index, str);
}

void	ft_string_insert_percent(t_string *self, size_t index)
{
	const char	*str = "%";

	ft_string_insert(self, index, str);
}

void	ft_string_insert_pointer(t_string *self, size_t index, const void *p)
{
	char	*str;

	str = ft_ptoh(p);
	ft_string_insert(self, index, str);
}

void	ft_string_insert_unsigned(t_string *self, size_t index, const unsigned int n)
{
	char	*str;

	str = ft_itoa(n);
	ft_string_insert(self, index, str);
}
