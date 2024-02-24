/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiny <tiny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 15:50:22 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/24 18:52:37 by tiny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}
