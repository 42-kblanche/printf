/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:57:13 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/08 17:23:29 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

typedef enum e_print
{
	CHAR = 'c',
	STRING = 's',
	POINTER = 'p',
	DECIMAL = 'd',
	INTEGER = 'i',
	UNSIGNED = 'u',
	UPHEX = 'X',
	LOHEX = 'x',
	PERCENT = '%'
}	t_print;

void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_printf(const char *str, ...);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
