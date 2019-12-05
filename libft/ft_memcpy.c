/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 20:34:51 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/19 21:39:54 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			tmp_n;
	unsigned char	*tmp_d;
	unsigned char	*tmp_s;

	if (!dst && !src)
		return (NULL);
	tmp_d = (unsigned char*)dst;
	tmp_s = (unsigned char*)src;
	tmp_n = -1;
	while (++tmp_n < n)
		*(tmp_d++) = *(tmp_s++);
	return (dst);
}
