/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 18:43:38 by tkarri            #+#    #+#             */
/*   Updated: 2019/04/05 21:38:52 by tkarri           ###   ########.fr       */
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

void	*ft_memccpy(void *restrict dst, const void *restrict src,
					int c, size_t n); //delete restrict!!!

int		ft_isdigit(int c);

int		ft_isalpha(int c);

int		ft_isalnum(int c);

void	ft_bzero(void *s, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

char	*ft_strcat(char *restrict s1, const char *restrict s2);

int		ft_strcmp(const char *s1, const char *s2);

char	*ft_strcpy(char *dst, const char *src);

int		ft_isprint(int c);

char	*ft_strchr(const char *s, int c);

char	*ft_strdup(const char *s1);

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t size);

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);

char	*ft_strncpy(char *dst, const char *src, size_t len);

char	*ft_strrchr(const char *s, int c);

#endif
