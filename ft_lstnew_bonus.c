/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiny <tiny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 14:47:32 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/24 17:15:53 by tiny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*buffer;

	if (!content)
		return (0);
	buffer = (t_list *)malloc(sizeof(t_list));
	if (!buffer)
		return (0);
	buffer->content = content;
	buffer->next = 0;
	return (buffer);
}
