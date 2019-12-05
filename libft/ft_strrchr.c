/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 16:19:19 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/15 16:27:22 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = (char *)s;
	while (*tmp)
	{
		tmp++;
		i++;
	}
	if (c == '\0')
		return (tmp);
	while (i >= 0)
	{
		if (*tmp == c)
			return (tmp);
		i--;
		tmp--;
	}
	return (NULL);
}
