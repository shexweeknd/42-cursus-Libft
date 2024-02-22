/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:18:07 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/22 17:08:13 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	total;
	size_t	i;
	size_t	j;

	total = ft_strlen(s1) + ft_strlen(s2);
	ret = malloc(sizeof(char) * total);
	if (!ret)
		return (NULL);
	i = 0;
	if (s1[0])
	{
		j = 0;
		while (s1[j])
			ret[i++] = s1[j++];
	}
	if (s2[0])
	{
		j = 0;
		while (s2[j])
			ret[i++] = s2[j++];
	}
	ret[total] = '\0';
	return (ret);
}

/*
#include <stdio.h>

int	main(void)
{
	char *s1 = "bonjour";
	char *s2 = " 42";
	char *ret;

	ret = ft_strjoin(s1, s2);
	printf("%s\n", ret);
	free(ret);
	return (0);
}*/