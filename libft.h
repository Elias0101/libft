/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 18:43:38 by tkarri            #+#    #+#             */
/*   Updated: 2019/04/04 19:38:00 by tkarri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <string.h>

int		ft_atoi(const char *str);

int		ft_toupper(int c);

int		ft_tolower(int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		ft_strlen(const char *s);

void	*ft_memset(void *b, int c, size_t len);

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n); //delete restrict!!!

int		ft_isdigit(int c);

int		ft_isalpha(int c);

int		ft_isalnum(int c);

void	ft_bzero(void *s, size_t n);

#endif
