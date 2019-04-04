/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkarri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:03:30 by tkarri            #+#    #+#             */
/*   Updated: 2019/04/04 15:34:10 by tkarri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int						i;
	int						sign;
	unsigned long long int	res;
	unsigned long long int	c;

	c = 9223372036854775807;
	res = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' &&
		(res = res * 10 + str[i] - '0') < c)
		i++;
	if (sign == 1 && res > c)
		return (-1);
	else if (sign == -1 && res > c + 1)
		return (0);
	return ((int)(res * sign));
}
