/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:27:31 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/22 08:26:31 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	ret;

	i = 0;
	while (is_space(str[i]))
		i++;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	ret = 0;
	while (is_number(str[i]))
	{
		ret = ret * 10 + (str[i] - 48);
		i++;
	}
	ret *= sign;
	return (ret);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	int ret;

	ret = ft_atoi("-54");
	printf("%d\n", ret); // expected 0
	return (0);
}*/