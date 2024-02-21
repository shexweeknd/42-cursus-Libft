/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:03:18 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/21 13:06:03 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(char *str, int c)
{
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

	str = "Bonjour je suis a 42\n";
	ret = ft_strchr(str, 'a');
	printf("%s", ret);
	return (0);
}
*/