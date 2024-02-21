/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:04:22 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/21 09:44:06 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, int n)
{
	void	*dest_copy;

	dest_copy = dest;
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
	ft_memcpy(src + 2, src, 5);
	printf("%s\n", src);
	return (0);
}*/