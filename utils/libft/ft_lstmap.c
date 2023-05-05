/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:42:19 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/12/02 15:42:57 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*nl;
	t_list	*nl2;

	if (!lst)
		return (NULL);
	nl = ft_lstnew(f(lst->content));
	if (!nl)
		return (NULL);
	nl2 = nl;
	while (lst->next)
	{
		lst = lst->next;
		nl->next = ft_lstnew(f(lst->content));
		if (!nl->next)
		{
			ft_lstclear(&nl2, del);
			return (NULL);
		}
		nl = nl->next;
	}
	return (nl2);
}
