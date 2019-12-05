/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 14:03:02 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/19 22:50:59 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	if (!(res = (char*)ft_memalloc(sizeof(*s1) * \
	(ft_strlen(s1) + ft_strlen(s2)) + 1)))
		return (NULL);
	ft_strcpy(res, s1);
	ft_strcat(res, s2);
	return (res);
}
