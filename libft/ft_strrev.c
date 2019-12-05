/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 14:48:41 by exam              #+#    #+#             */
/*   Updated: 2019/08/16 15:38:36 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		size;
	int		i;
	char	tmp;
	char	*start;

	start = str;
	i = 0;
	size = 0;
	while (*str != '\0')
	{
		size++;
		str++;
	}
	str--;
	while (i < (size / 2))
	{
		tmp = start[i];
		start[i++] = *str;
		*str-- = tmp;
	}
	str = start;
	return (str);
}
