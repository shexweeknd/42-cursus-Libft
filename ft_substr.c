/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiny <tiny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:59:21 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/22 18:15:31 by tiny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	i;
	unsigned int	j;

	if (start > ft_strlen(s))
		ret = (char *)malloc(sizeof(char));
	else
		ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	i = 0;
	j = 0;
	while (i <= (start + len) && s[i] && start <= ft_strlen(s))
	{
		if (i >= start && i < (start + len))
			ret[j++] = s[i];
		i++;
	}
	ret[j] = '\0';
	return (ret);
}

/*
#include <stdio.h>

int	main(void)
{
	char *s;
	char *ret;
	int start;
	int len;

	s = "lorem ipsum dolor is amet";
	start = 7;
	len = 10;
	ret = ft_substr(s, start, len);
	printf("%s\n", ret); // expected "m ipsum "
	free(ret);
	return (0);
}*/