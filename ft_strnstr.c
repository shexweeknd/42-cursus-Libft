/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:54:27 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/22 15:06:14 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	int	i;

	if (!*(unsigned char *)to_find)
		return ((char *)str);
	if (!*(unsigned char *)str)
		return (NULL);
	i = 0;
	while (n--)
	{
		if (*(unsigned char *)str != *(unsigned char *)(to_find + i))
			i = 0;
		if (*(unsigned char *)str
			&& *(unsigned char *)str++ == *(unsigned char *)(to_find + i))
		{
			if (*(unsigned char *)(to_find + i + 1) == '\0')
				return ((char *)(--str - i));
			i++;
		}
	}
	return (NULL);
}

/*
#include <stdio.h>

int	main(void)
{
	char *ret;
	char *str = "";
	char *to_find = "teste";

	ret = ft_strnstr(str, to_find, 0);
	printf("%s\n", ret);
	return (0);
}*/