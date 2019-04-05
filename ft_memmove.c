/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 16:18:17 by tkarri            #+#    #+#             */
/*   Updated: 2019/04/05 16:45:23 by tkarri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		copy[len];
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	ft_memcpy(copy, s, len);
	ft_memcpy(d, copy, len);
	return (dst);
}
