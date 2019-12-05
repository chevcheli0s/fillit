/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:07:31 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/19 16:45:50 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoa_len(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char		*ft_itoa(int n)
{
	int		len;
	int		tmp;
	char	*res;

	len = ft_itoa_len(n);
	if (!(res = (char *)ft_memalloc(len + 1)))
		return (NULL);
	if (n < 0)
		res[0] = '-';
	tmp = n;
	while (len-- > (tmp < 0 ? 1 : 0))
	{
		res[len] = '0' + n % 10 * (n < 0 ? -1 : 1);
		n /= 10;
	}
	return (res);
}
