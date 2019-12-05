/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knarwhal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:52:39 by knarwhal          #+#    #+#             */
/*   Updated: 2019/09/19 19:55:19 by knarwhal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*lstnext;

	lst = *alst;
	while (lst)
	{
		lstnext = lst->next;
		del(lst->content, lst->content_size);
		free(lst);
		lst = lstnext;
	}
	*alst = NULL;
}
