/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_insert_2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 19:16:25 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/27 21:30:51 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../stringft.h"
#include "../libft.h"
#include <stdlib.h>

size_t	ft_string_insert_int(t_string *self, size_t index, const int n)
{
	char	*str;
	size_t	ret;

	str = ft_itoa(n);
	ret = ft_string_insert(self, index, str);
	free(str);
	return (ret);
}

size_t	ft_string_insert_percent(t_string *self, size_t index)
{
	const char	*str = "%";
	size_t		ret;

	ret = ft_string_insert(self, index, str);
	return (ret);
}

size_t	ft_string_insert_ptr(t_string *self, size_t index, const void *p)
{
	char	*str;
	size_t	ret;

	str = ft_ptoh(p);
	ret = ft_string_insert(self, index, str);
	free(str);
	return (ret);
}

size_t	ft_string_insert_uint(t_string *self, size_t index, const t_uint n)
{
	char	*str;
	size_t	ret;

	str = ft_itoa(n);
	ret = ft_string_insert(self, index, str);
	free(str);
	return (ret);
}
