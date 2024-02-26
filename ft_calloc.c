/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:45:44 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/26 15:32:38 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*ret;
	long	total;

	total = n * size;
	if (total < 0)
		return (0);
	ret = (void *)malloc(total);
	if (!ret)
		return (NULL);
	if (ret || total >= -2147483648 || total <= 2147483647)
	{
		ft_bzero(ret, total);
		return (ret);
	}
	return (0);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main (void)
{
	int size = 8539;
	int ret;
	void *str;
	void *test;

	str = (char *)ft_calloc(size, sizeof(int));
	test = (char *)calloc(size, sizeof(int));
	ret = memcmp(str, test, size * sizeof(int));
	printf("%d\n", ret);
	free(str);
	free(test);
	return (0);
}*/