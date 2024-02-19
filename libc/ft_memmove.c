/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:12:17 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/19 17:41:04 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memmove(void *dest, const void *src, int n)
{
    void *temp;

    while (n--)
        *(unsigned char*)(temp + i++) = *(unsigned char*)src++; 
    while (temp)
        *(unsigned char *)dest = *temp++;
    
    return (dest);
}