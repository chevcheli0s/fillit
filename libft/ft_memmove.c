/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 21:17:29 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/19 20:15:16 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmp_d;
	unsigned char	*tmp_s;

	if (!dst && !src)
		return (NULL);
	tmp_d = (unsigned char*)dst;
	tmp_s = (unsigned char*)src;
	if (tmp_d > tmp_s)
		while (len--)
			tmp_d[len] = tmp_s[len];
	else
		while (len--)
			*(tmp_d++) = *(tmp_s++);
	return (dst);
}
