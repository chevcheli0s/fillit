/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 16:40:33 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/20 17:15:25 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_res(char **res, size_t i)
{
	while (i > 0)
		ft_strdel(&res[i--]);
	ft_strdel(&res[0]);
	ft_memdel((void**)&res);
}

static int	nb_words(char const *s, char c)
{
	size_t	i;
	int		nb;
	int		space;

	i = 0;
	nb = 0;
	space = 1;
	while (s[i])
	{
		if (space && s[i] != c)
		{
			nb++;
			space = 0;
		}
		if (s[i] == c)
			space = 1;
		i++;
	}
	return (nb);
}

static char	*next_word(char const *s, char c, size_t *start)
{
	size_t	pos;

	while (s[*start] == c)
		*start += 1;
	pos = *start;
	while (s[*start])
	{
		if (s[*start] == c)
			break ;
		*start += 1;
	}
	return (ft_strsub(s, pos, *start - pos));
}

char		**ft_strsplit(char const *s, char c)
{
	int		words;
	char	**res;
	size_t	i;
	size_t	start;

	if (!s)
		return (NULL);
	words = nb_words(s, c);
	if (!(res = (char**)malloc(sizeof(char*) * (words + 1))))
		return (NULL);
	i = 0;
	start = 0;
	while (words--)
	{
		if (!(res[i++] = next_word(s, c, &start)))
		{
			free_res(res, i);
			return (NULL);
		}
	}
	res[i] = NULL;
	return (res);
}
