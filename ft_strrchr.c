/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:11:16 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/21 15:17:04 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, char c)
{
	char	*res;

	if (c == '\0')
	{
		while (*str++)
			;
		return ((char *)(--str));
	}
	res = 0;
	while (*str)
		if (*str++ == c)
			res = str - 1;
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	char *ret;
	char *str;

	str = "teste";
	ret = ft_strrchr(str, 101);
	printf("%s", ret);
	return (0);
}*/
