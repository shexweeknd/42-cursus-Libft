/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brouillon.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:31:32 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/19 15:27:15 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char *res = NULL;
    int n;

	if (argc != 3)
	{
		printf("Veuiller ajouter:\n1 - Le caractere a remplir en memoire\n2 - La taille a remplir\n");
		return (1);
	}
	else if (argv[1][1])
	{
		printf("Le deuxieme arg %s ne doit contenir qu'un seul caractere\n",
			argv[1]);
	}
    n = atoi(argv[2]);
	res = memset(res, argv[1][0], n);
	if (res)
		printf("Le resultat en memoire est : %s\n", res);
	return (0);
}