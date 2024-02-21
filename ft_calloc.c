/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:45:44 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/21 11:13:13 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(int n, int size)
{
	char *ret;
	long total;

	if (!n || !size)
		return (0);
	total = n * size;
	ret = (void *)malloc(total);
    if (!ret)
        exit(1);
	if (total < -2147483648 || total > 2147483647)
		exit(1);
    return (ret);
}