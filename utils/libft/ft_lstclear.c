/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcruz-an <rcruz-an@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:11:44 by rcruz-an          #+#    #+#             */
/*   Updated: 2022/11/25 14:39:31 by rcruz-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*y;

	if (lst && del)
	{
		while (*lst)
		{
			y = *lst;
			*lst = (*lst)->next;
			ft_lstdelone(y, del);
		}
		*lst = NULL;
	}
}
