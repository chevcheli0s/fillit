/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 17:00:11 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/16 17:26:13 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char const	*tmp;
	char		*res;
	char		*restmp;

	if (!s || !f || !(res = (char*)ft_memalloc(sizeof(*s) * ft_strlen(s) + 1)))
		return (NULL);
	restmp = res;
	tmp = s;
	while (*tmp)
		*(res++) = f(*(tmp++));
	return (restmp);
}
