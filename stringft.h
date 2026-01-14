/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:37:03 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/08 17:37:06 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGFT_H
# define STRINGFT_H

# include <stddef.h>
# include <sys/types.h>

typedef struct s_ft_string
{
	char	*str;
	size_t	max_size;
}	t_string;

void		ft_string_destroy(t_string *self);
t_string	*ft_string_init(t_string *self);
t_string	*ft_string_init_str(t_string *self, char *str);
t_string	*ft_string_assign(t_string *self, const char *str);
void		ft_string_erase(t_string *self, size_t index);
ssize_t		ft_string_find(t_string *self, const char *needle);
void		ft_string_append(t_string *self, const char *str);
size_t		ft_string_double_size(t_string *self);

#endif
