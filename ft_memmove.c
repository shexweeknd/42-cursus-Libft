/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:12:17 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/22 08:43:13 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, int n)
{
	unsigned char	*dest_copy;

	dest_copy = (unsigned char *)dest;
	if (n == 0)
		return (dest);
	if (src >= dest)
		while (n--)
			*(unsigned char *)dest++ = *(unsigned char *)src++;
	else if (src < dest)
		while (--n >= 0)
			*(unsigned char *)(dest + n) = *(unsigned char *)(src + n);
	return ((void *)dest_copy);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *ret;

	char src[] = "consectetur";

	printf("%s\n", src);
	ret = ft_memmove(src, src, 0);
	printf("%s\n", ret);
	return (0);
}*/