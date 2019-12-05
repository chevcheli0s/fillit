/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 15:28:20 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/17 16:55:27 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*res;
	int		start;
	int		end;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	start = i;
	if (start == (int)ft_strlen(s))
		return (ft_strnew(0));
	i = (int)ft_strlen(s) - 1;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i--;
	end = i;
	if (!(res = (ft_strsub(s, start, end - start + 1))))
		return (NULL);
	return (res);
}
