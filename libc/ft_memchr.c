/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 18:06:10 by hramaros              #+#    #+#             */
/*   Updated: 2024/02/21 08:55:21 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *str, int c, int b_size)
{
	char	*ret;

	ret = 0;
	while (b_size--)
	{
		if (*(unsigned char *)str == c)
		{
			ret = (char *)str++;
			break ;
		}
		else
			str++;
	}
	return (ret);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *s = "bonjour je fais parti de l'elite";
	char *ret;
	char c = 'e';
	int n = 9;

	ret = memchr(s, c, n);
	printf("%s\n", ret);
	return (0);
}*/