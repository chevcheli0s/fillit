/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:20:21 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/11 16:20:22 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char *buff;

	buff = dst;
	while (n > 0)
	{
		if (*src != '\0')
			*dst++ = *src++;
		else
			*dst++ = '\0';
		n--;
	}
	return (buff);
}
