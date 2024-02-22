/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 09:45:44 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/22 14:31:57 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (n--)
		*(unsigned char *)(s + i++) = 0;
}
*/
void	*ft_calloc(size_t n, size_t size)
{
	char	*ret;
	long	total;

	total = n * size;
	ret = (void *)malloc(total);
	if (!ret)
		return (0);
	ft_bzero(ret, total);
	if (!ret || total < -2147483648 || total > 2147483647)
		return (0);
	return (ret);
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