/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 16:01:35 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/24 17:13:14 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!*lst || (*del) || !lst)
		return ;
	(*del)((*lst)->content);
	ft_lstclear(&(*lst)->next, del);
	free(*lst);
	*lst = 0;
}
