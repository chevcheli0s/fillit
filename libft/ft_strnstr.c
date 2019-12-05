/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 16:28:49 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/19 22:21:31 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	pos;
	size_t	i;
	size_t	lenn;
	char	*tmp;

	tmp = (char*)haystack;
	pos = 0;
	if (!(*needle))
		return (tmp);
	lenn = ft_strlen(needle);
	while (tmp[pos] && (pos + lenn) <= len)
	{
		i = 0;
		while (tmp[pos + i] == needle[i])
		{
			if (i == (lenn - 1))
				return (tmp + pos);
			i++;
		}
		pos++;
	}
	return (NULL);
}
