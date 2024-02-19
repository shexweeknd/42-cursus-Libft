/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:04:22 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/19 16:11:45 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dest, const void *src, int n)
{
	void *dest_copy;

	dest_copy = dest;
	while (n--)
		*(unsigned char *)dest++ = *(const unsigned char *)src++;
	return (dest_copy);
}