/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 18:43:38 by tkarri            #+#    #+#             */
/*   Updated: 2019/04/06 19:41:15 by tkarri           ###   ########.fr       */
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
					int c, size_t n);

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

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size);

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);

char	*ft_strncpy(char *dst, const char *src, size_t len);

char	*ft_strrchr(const char *s, int c);

int		ft_isascii(int c);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

char	*ft_strstr(const char *haystack, const char *needle);

void	ft_putchar_fd(char c, int fd);

void	ft_striter(char *s, void (*f)(char *));

char	*ft_strmap(char const *s, char (*f)(char));

void	ft_putchar(char c);

void	ft_putstr_fd(char const *s, int fd);

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	*ft_memalloc(size_t size);

void	ft_memdel(void **ap);

void	ft_putendl_fd(char const *s, int fd);

void	ft_putstr(char const *s);

void	ft_strclr(char *s);

char	*ft_strjoin(char const *s1, char const *s2);

int		ft_strnequ(char const *s1, char const *s2, size_t n);

char	*ft_itoa(int n); // do it!

void	ft_putendl(char const *s);

//void	ft_putnbr_fd(int n, int fd);

void	ft_strdel(char **as);

int		ft_strequ(char const *s1, char const *s2);

char	*ft_strnew(size_t size);

#endif
