/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 19:05:10 by tkarri            #+#    #+#             */
/*   Updated: 2019/04/06 19:27:03 by tkarri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		n_copy;
	int		is_minus;
	int		i;

	is_minus = 0;
	i = 0;
	if (n < 0)
	{
		is_minus = 1;
		n *= (-1);
	}
	n_copy = n;
	len = 1;
	while ((n_copy = n_copy / 10) > 0)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1 + is_minus));
	if (str)
	{
		ft_strclr(str);
		if (is_minus)
		{
			i++;
			str[0] = '-';
		}
		while (n > 9)
			i++;
		str[i] = n + '0';
	}
	return (NULL);
}
