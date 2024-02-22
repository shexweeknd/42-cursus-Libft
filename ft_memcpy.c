/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:04:22 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/22 13:48:48 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void	*dest_copy;

	dest_copy = dest;
	if (!n)
		return (dest);
	if (dest == NULL && src == NULL)
		return (0);
	while (n--)
		*(unsigned char *)dest++ = *(const unsigned char *)src++;
	return (dest_copy);
}

/*
#include <stdio.h>

int	main(void)
{
	char src[] = "Nuts Channel Is Back";

	printf("%s\n", src);
	ft_memcpy(NULL, NULL, 5);
	printf("%s\n", src);
	return (0);
}*/