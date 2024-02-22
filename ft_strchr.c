/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:03:18 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/21 14:50:14 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(char *str, char c)
{
	if (c == '\0')
	{
		while (*str++)
			;
		return (--str);
	}
	while (*str)
		if (*str++ == c)
			return (--str);
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
