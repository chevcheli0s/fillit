/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:33:30 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/11 17:40:37 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*dest;

	if (!(dest = (char*)ft_memalloc((ft_strlen(s1) + 1) * sizeof(char))))
		return (NULL);
	dest = ft_strcpy(dest, s1);
	return (dest);
}
