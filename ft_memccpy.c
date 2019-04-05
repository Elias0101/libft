/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 18:00:52 by tkarri            #+#    #+#             */
/*   Updated: 2019/04/05 15:23:19 by tkarri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src,
					int c, size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while (n)
	{
		*d = *s;
		if (*s == (unsigned char)c)
			return (++d);
		d++;
		s++;
		n--;
	}
	return (NULL);
}
