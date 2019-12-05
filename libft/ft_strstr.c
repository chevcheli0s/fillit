/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:20:24 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/11 16:20:25 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int pos;
	int i;

	pos = 0;
	if (needle[0] == '\0')
		return ((char*)(haystack));
	while (haystack[pos] != '\0')
	{
		i = 0;
		while (haystack[pos + i] == needle[i])
		{
			if (needle[i + 1] == '\0')
				return ((char*)(haystack + pos));
			i++;
		}
		pos++;
	}
	return (NULL);
}
