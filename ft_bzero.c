/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:46:44 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/21 13:04:54 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, int n)
{
	while (n--)
		*(unsigned int *)s++ = 0;
}

/*
#include <stdio.h>
#include <strings.h>

int	main(int argc, char **argv)
{
	int nbr;

	if (argc != 2)
	{
		printf("Ajoutez un argument\n");
		return (1);
	}
	printf("L'argument : %s\n", argv[1]);
	nbr = 4;
	ft_bzero(argv[1], nbr);
	printf("Le resultat : %s\n", argv[1]);
	return (0);
}*/