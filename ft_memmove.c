/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:12:17 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/21 13:05:52 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*ret;
	int		size;

	size = 0;
	while (s[size])
		size++;
	ret = (char *)malloc(sizeof(char) * size);
	if (!ret)
		exit(EXIT_FAILURE);
	size = 0;
	while (s[size])
	{
		*(ret + size) = s[size];
		size++;
	}
	ret[size] = '\0';
	return (ret);
}

void	*ft_memmove(void *dest, const void *src, int n)
{
	unsigned char	*temp;
	int				i;

	temp = (unsigned char *)ft_strdup((char *)src);
	i = 0;
	while (n--)
	{
		*(unsigned char *)(dest + i) = temp[i];
		i++;
	}
	free(temp);
	return (dest);
}

/*
#include <stdio.h>

int	main(void)
{
	char src[] = "Nuts Channel Is Back";

	printf("%s\n", src);
	ft_memmove(src + 2, src, 5);
	printf("%s\n", src);
	return (0);
}*/