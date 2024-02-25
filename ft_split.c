/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 19:23:47 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/25 15:16:05 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_count(const char *s, unsigned char c)
{
	size_t	count;

	count = 0;
	if (!s)
		return (0);
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s != c && *s)
				s++;
		}
		else
		{
			while (*s && *s == c)
				s++;
		}
	}
	return (count);
}

// Memory allocation
static char	*ft_firstword(char *str, char c)
{
	char	*word;
	int		first_word_len;
	int		i;

	first_word_len = 0;
	while (str[first_word_len] != c && str[first_word_len] != '\0')
		first_word_len++;
	word = (char *)malloc(sizeof(char) * (first_word_len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (*str != c && *str != '\0')
	{
		if (*str != c)
			word[i++] = *str;
		str++;
	}
	word[first_word_len] = '\0';
	return (word);
}

static int ft_decalage(char *trimmed_str, char c, int position)
{
	while (trimmed_str[position] != '\0')
	{
		if (trimmed_str[position] == c && trimmed_str[position + 1] != c)
		{
			position++;
			break ;
		}
		position++;
	}
	return (position);
}

static void	ft_free(char **buffer)
{
	int	i;

	i = 0;
	while (*(buffer + i))
		free(*(buffer + i++));
	free(buffer);
}

char	**ft_split(char const *s, char c)
{
	char	**buffer2d;
	char	*trimmed_str;
	size_t	word_count;
	size_t	i;
	int		position;

	if (!s)
		return (NULL);
	trimmed_str = ft_strtrim(s, &c);
	if (!trimmed_str)
		return (NULL);
	word_count = ft_word_count(trimmed_str, c);
	buffer2d = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!buffer2d)
		return (NULL);
	buffer2d[word_count] = NULL;
	i = 0;
	position = 0;
	while (i < word_count)
	{
		buffer2d[i] = ft_firstword(trimmed_str + position, c);
		if (!buffer2d[i++])
		{
			ft_free(buffer2d);
			return (NULL);
		}
		position = ft_decalage(trimmed_str, c, position);
	}
	free(trimmed_str);
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