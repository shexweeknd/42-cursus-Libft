/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brouillon.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hramaros <hramaros@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:31:32 by hramaros          #+#    #+#             */
/*   Updated: 2024/02/21 09:14:06 by hramaros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char *ret;
	char *str;

	str = "Bonjour je suis a 42\n";
	ret = strnstr(str, 'a');
	printf("%s\n", ret);
	return (0);
}