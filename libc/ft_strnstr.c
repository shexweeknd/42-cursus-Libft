/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:58:20 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/21 09:43:41 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *str, const char *to_find, int n)
{
	char	*occ;
	int		i;
	int		j;

	if (!*to_find)
		return ((char *)str);
	j = 0;
	while (n--)
	{
		if (*(str + j) == *to_find)
		{
			i = 0;
			while (*(str + j) == *(to_find + i))
			{
				if (!*(to_find + i + 1))
				{
					occ = (char *)(str + j - i);
					return (occ);
				}
				i++;
				j++;
			}
		}
		j++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *str;
	char *to_find;
	char *ret;

	str = "Bonjour je suis a 42\n";
	to_find = "";
	ret = ft_strnstr(str, to_find, 3);
	printf("%s\n", ret);
	return (0);
}*/