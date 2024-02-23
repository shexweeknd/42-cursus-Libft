/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 18:20:25 by tiny              #+#    #+#             */
/*   Updated: 2024/02/23 14:17:29 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinside(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
		if ((unsigned char)c == (unsigned char)set[i++])
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buffer;
	char	*ptr;
	size_t	len;
	int		i;

	len = ft_strlen(s1);
	ptr = (char *)&s1[len - 1];
	buffer = (char *)malloc(sizeof(unsigned char) * len + 1);
	if (!buffer)
		return (0);
	i = 0;
	while (*(unsigned char *)s1 && ft_isinside(*s1, set))
		s1++;
	while (ft_isinside(*ptr, set))
		ptr--;
	i = 0;
	while (s1[i] && ((char *)&s1[i] <= ptr))
	{
		buffer[i] = s1[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char *str = " lo rem ipsum dolor lo ";
	char *set = " ";
	char *ret;

	ret = ft_strtrim(str, set);
	printf("%s\n", ret);
	free(ret);
	return (0);
}*/