/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 21:38:06 by tkarri            #+#    #+#             */
/*   Updated: 2019/04/05 22:07:04 by tkarri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	char *copy;

	copy = (char *)s;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (copy - i);
		i--;
	}
	return (NULL);
}
