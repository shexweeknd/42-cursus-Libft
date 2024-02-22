/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:03:18 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/22 14:03:09 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	if (c == '\0')
	{
		while (*str++)
			;
		return ((char *)(--str));
	}
	while (*str)
		if (*str++ == (char)c)
			return ((char *)(--str));
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*ret;
	char	*str;

	str = "teste";
	ret = ft_strchr(str, 357);
	printf("%s", ret);
	return (0);
}*/
