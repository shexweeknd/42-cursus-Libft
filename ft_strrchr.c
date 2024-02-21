/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:11:16 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/21 09:43:43 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(char *str, char c)
{
	char	*res;

	res = 0;
	while (*str)
		if (*str++ == c)
		{
			res = --str;
			str++;
		}
	return (res);
}

/*
#include <stdio.h>

int	main(void)
{
	char *ret;
	char *str;

	str = "Bonjour j2 suis a 42\n";
	ret = ft_strrchr(str, '2');
	printf("%s", ret);
	return (0);
}*/