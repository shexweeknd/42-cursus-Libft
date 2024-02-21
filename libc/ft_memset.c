/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:13:35 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/20 14:10:57 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n)
{
	void	*s_cpy;

	s_cpy = s;
	while (n--)
		*(unsigned char *)s++ = (unsigned char)c;
	return (s_cpy);
}
