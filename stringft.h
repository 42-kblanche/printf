/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stringft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 20:37:03 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/22 07:34:48 by kblanche         ###   ########.fr       */
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

void		ft_string_append(t_string *self, const char *str);
void		ft_string_append_char(t_string *self, const char c);
void		ft_string_append_float(t_string *self, const double n);
void		ft_string_append_hex_lo(t_string *self, const int n);
void		ft_string_append_hex_up(t_string *self, const int n);
void		ft_string_append_int(t_string *self, const int n);
void		ft_string_append_percent(t_string *self);
void		ft_string_append_pointer(t_string *self, const void *p);
void		ft_string_append_unsigned(t_string *self, const unsigned int n);
void		ft_string_assign(t_string *self, const char *str);
void		ft_string_destroy(t_string *self);
size_t		ft_string_double_size(t_string *self);
void		ft_string_erase(t_string *self, size_t index, size_t len);
ssize_t		ft_string_find(const t_string *self, const char *needle);
t_string	*ft_string_init(t_string *self);
t_string	*ft_string_init_str(t_string *self, const char *str);
void		ft_string_insert(t_string *self, size_t index, const char *str);
void		ft_string_print(const t_string *self, int fd);
t_string	ft_string_substr(t_string *self, size_t index, size_t len);

#endif
