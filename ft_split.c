/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiny <tiny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:23:47 by tiny              #+#    #+#             */
/*   Updated: 2024/02/23 03:40:13 by tiny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_count_occ(const char *str, unsigned char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == c)
			count++;
		i++;
	}
	return (count);
}

char    *ft_chartostr(char c)
{
    char *str;

    str = c;
    return (str);
}

char	**ft_split(char const *s, char c)
{
	char	*buffer1d;
	char	*buffer2d;
	char	*temp;
	int		size;

	buffer1d = ft_split(s, ft_chartostr(c));
	if (!buffer1d)
		return (0);
    size = ft_count_occ(s, c);
    buffer2d = (char **)malloc(sizeof(char *) * size + 1);
    if (!buffer2d)
    {
        free(buffer1d);
        return (0);
    }
    i = 0;
    while (occ)
    {
        temp = ft_firstocc(buffer1d, occ--);
        buffer2d[i] = temp;
        i++;
    }
    free(buffer1d);
	return (buffer2d);
}
