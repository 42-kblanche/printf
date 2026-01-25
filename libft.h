/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kblanche <kblanche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 19:57:13 by kblanche          #+#    #+#             */
/*   Updated: 2026/01/25 01:44:38 by kblanche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <sys/types.h>
# include <stddef.h>

void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_itoa(int n);
char	*ft_itoh(int n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
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
