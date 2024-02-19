/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brouillon.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:31:32 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/19 15:55:56 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    bzero(argv[1], nbr);
    printf("Le resultat : %s\n", argv[1]);
	return (0);
}