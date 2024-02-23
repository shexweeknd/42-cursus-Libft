/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 09:17:54 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/23 13:27:02 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_isnegative(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

unsigned int	ft_getitoasize(unsigned int n)
{
	long	res;

	res = 1;
	if ((n / 10) == 0)
		return (1);
	return (res + ft_getitoasize(n / 10));
}

void	ft_long_recurse(char *buffer, unsigned int index, int len,
		unsigned long number)
{
	if (number < 10 && len > 0)
		buffer[len] = '\0';
	else if (number >= 10 && len > 0)
		ft_long_recurse(buffer, index + 1, len, number / 10);
	if (len > 0)
		buffer[(len - (index + 1))] = (char)((number % 10) + 48);
	else if (len < 0)
	{
		buffer[0] = '-';
		ft_long_recurse(buffer, 1, len * -1 + 2, number);
	}
	return ;
}

char	*call_recurse(char *buffer, int len, int n)
{
	if (ft_isnegative(n))
		ft_long_recurse(buffer, 0, -len, -n);
	else if (!ft_isnegative(n))
		ft_long_recurse(buffer, 0, len, n);
	return (buffer);
}

char	*ft_itoa(int n)
{
	char			*buffer;
	unsigned int	len;

	if (n == -2147483648)
	{
		buffer = (char *)malloc(sizeof(char) * 12);
		ft_long_recurse(buffer, 0, -10, 2147483648);
		return (buffer);
	}
	if (ft_isnegative(n))
	{
		len = ft_getitoasize(-n);
		buffer = (char *)malloc(sizeof(char) * (len + 2));
	}
	else if (!ft_isnegative(n))
	{
		len = ft_getitoasize(n);
		buffer = (char *)malloc(sizeof(char) * (len + 1));
	}
	if (!buffer)
		return (0);
	return (call_recurse(buffer, len, n));
}

/*
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *res;

	res = ft_itoa(-2147483648);
	printf("%s\n", res);
	free(res);
	return(0);
}*/