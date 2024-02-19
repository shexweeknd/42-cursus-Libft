/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:06:35 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/19 14:55:36 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (2048);
	return (0);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int res;

	if (argc != 2)
	{
		printf("Veuiller ajouter un argument\n");
		return (1);
	}
	else if (!argv[1][1])
		return (1);
	res = ft_isdigit(argv[1][0]);
	if (res)
		printf("%c est un digit\n", argv[1][0]);
	else
		printf("%c n'est pas un digit\n", argv[1][0]);
	return (0);
}*/