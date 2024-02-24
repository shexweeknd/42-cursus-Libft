/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:18:39 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/24 17:13:27 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res_el;
	t_list	*first_el;

	if (!lst || !(*f) || !(*del))
		return (0);
	first_el = 0;
	while (lst)
	{
		res_el = ft_lstnew((*f)(lst->content));
		if (!res_el)
		{
			ft_lstclear(&(first_el), (*del));
			break ;
		}
		ft_lstadd_back(&(first_el), res_el);
		lst = lst->next;
	}
	return (first_el);
}
