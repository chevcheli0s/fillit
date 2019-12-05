/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 18:06:33 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/20 23:09:21 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (NULL);
	if (!(dest = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (len-- && s[i + start])
	{
		dest[i] = s[i + start];
		i++;
	}
	return (dest);
}
