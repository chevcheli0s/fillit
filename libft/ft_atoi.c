/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:19:00 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/19 21:29:53 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long	nb;
	int				suff;

	nb = 0;
	suff = 1;
	while (*str == '\n' || *str == '\t' || *str == '\v'
			|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			suff = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = (*str - '0') + 10 * nb;
		str += 1;
	}
	if (nb <= 9223372036854775807ul)
		return ((int)(nb * suff));
	return (suff == 1 ? -1 : 0);
}
