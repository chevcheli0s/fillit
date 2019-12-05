/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 21:53:09 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/11 22:56:05 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*tmp1;
	const unsigned char	*tmp2;

	tmp1 = (const unsigned char *)s1;
	tmp2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*tmp1 == *tmp2 && --n)
	{
		tmp1++;
		tmp2++;
	}
	return ((int)(*tmp1 - *tmp2));
}
