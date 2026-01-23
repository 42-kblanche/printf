/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:57:13 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/22 08:56:28 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <sys/types.h>
# include <stddef.h>

typedef enum e_print
{
	PRINT_CHAR = 'c',
	PRINT_STRING = 's',
	PRINT_POINTER = 'p',
	PRINT_DECIMAL = 'd',
	PRINT_INTEGER = 'i',
	PRINT_UNSIGNED = 'u',
	PRINT_UPHEX = 'X',
	PRINT_LOHEX = 'x',
	PRINT_PERCENT = '%'
}	t_print;

void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_itoa(int n);
char	*ft_itoh(int n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_printf(const char *str, ...);
char	*ft_ptoh(const void *ptr);
void	ft_putstr_fd(char *s, int fd);
char	*ft_strdup(const char *s);
ssize_t	ft_strfind(const char *haystack, const char *needle);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	ft_strtolower(char *str);
void	ft_strtoupper(char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
