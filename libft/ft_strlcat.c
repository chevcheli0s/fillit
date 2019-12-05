/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:20:07 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/11 18:18:03 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t lenght;

	i = 0;
	while (dst[i])
		i++;
	lenght = 0;
	while (src[lenght])
		lenght++;
	if (size <= i)
		lenght += size;
	else
		lenght += i;
	j = 0;
	while (src[j] && size > i + 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (lenght);
}
