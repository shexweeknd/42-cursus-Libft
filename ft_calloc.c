/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:45:44 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/22 08:49:49 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(int n, int size)
{
	char	*ret;
	long	total;

	total = n * size;
	ret = (void *)malloc(total);
	if (!ret || total < -2147483648 || total > 2147483647)
		return (0);
	return (ret);
}

/*
#include <stdlib.h>
#include <unistd.h>

int main (void)
{
	char *str;

	str = (char *)calloc(30, 1);
	if (!str)
		write(1, "NULL", 4);
	else
	{
		write(1, str, 30);
	}
	return (0);
}*/