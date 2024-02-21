/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:13:23 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/21 13:06:07 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*ret;
	int		size;

	size = 0;
	while (s[size])
		size++;
	ret = (char *)malloc(sizeof(char) * size);
	if (!ret)
		exit(EXIT_FAILURE);
	size = 0;
	while (s[size])
	{
		*(ret + size) = s[size];
		size++;
	}
	ret[size] = '\0';
	return (ret);
}

/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *ret;

	if (argc != 2)
	{
		printf("Ajoutez un argument\n");
		return (1);
	}
	printf("L'argument : %s\n", argv[1]);
	ret = ft_strdup(argv[1]);
	printf("Le resultat : %s\n", ret);
	free(ret);
	return (0);
}*/