/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:23:47 by tiny              #+#    #+#             */
/*   Updated: 2024/02/23 14:16:43 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_occ(const char *str, unsigned char c)
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

static char	*ft_chartostr(char c)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * 2);
	if (!str)
		return (0);
	str[0] = c;
	str[1] = '\0';
	return ((char *)str);
}

static char	*set_offset(char *str, unsigned char c, char *str_offset, int occ)
{
	int	i;
	int	size;

	size = ft_strlen(str);
	i = 0;
	while (i <= occ && str[--size])
	{
		str_offset = &str[size];
		if (str[size] == c)
			i++;
	}
	return (str_offset);
}

static char	*ft_getfirst(char *str, unsigned char c, int occ)
{
	char	*word;
	char	*str_offset;
	size_t	size;
	int		i;

	size = ft_strlen(str);
	word = (char *)malloc(sizeof(char) * size);
	if (!word)
		return (0);
	str_offset = 0;
	str_offset = set_offset(str, c, str_offset, occ);
	if (str_offset[0] == c)
		str_offset++;
	i = 0;
	while (str_offset[i] && str_offset[i] != c)
	{
		word[i] = str_offset[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	*buffer1d;
	char	**buffer2d;
	int		occ;
	int		i;

	buffer1d = ft_chartostr(c);
	if (!buffer1d)
		return (0);
	buffer1d = ft_strtrim(s, buffer1d);
	if (!buffer1d)
		return (0);
	occ = ft_count_occ(buffer1d, c);
	buffer2d = (char **)malloc(sizeof(char *) * (occ + 2));
	if (!buffer2d)
	{
		free(buffer1d);
		return (0);
	}
	i = 0;
	while (occ >= 0)
		buffer2d[i++] = ft_getfirst(buffer1d, (unsigned char)c, occ--);
	free(buffer1d);
	buffer2d[i] = NULL;
	return (buffer2d);
}

/*
#include <stdio.h>

int	main(void)
{
	const char *str;
	char **res;
	int i;

	str = "lorem ipsum dolor sit asmet";
	res = ft_split(str, ' ');
	i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		free(res[i]);
		i++;
	}
	i = 0;
	free(res);
	return (0);
}*/