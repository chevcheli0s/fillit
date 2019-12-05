/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 17:21:37 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/20 22:57:05 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*p;

	if (size + 1 == 0)
		return (NULL);
	if (!(p = (char*)ft_memalloc(size + 1)))
		return (NULL);
	return (p);
}
