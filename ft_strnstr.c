/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:54:27 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/22 07:44:56 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strnstr(void *str, void *to_find, int n)
{
    int i;

    i = 0;
    while (n--)
    {
        if (*(unsigned char *)str && *(unsigned char *)str++ == *(unsigned char *)(to_find + i))
        {
            if (*(unsigned char *)(to_find + (i + 1)) == '\0')
                return ((char *)(--str - i));
            i++;
        }
    }
    return (NULL);
}

/*
#include <stdio.h>

int main(void)
{
    char *ret;
    char *str = "qwerty";
    char *to_find = "erty";
    
    ret = ft_strnstr(str, to_find, 5); //expected NULL
    printf("%s\n", ret);
    return (0);
}*/