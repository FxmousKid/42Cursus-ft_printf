/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 22:31:43 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/01 22:31:46 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/conversions.h"

int	ft_atoi(char *nptr)
{
	int	rendue;
	int	sign;

	rendue = 0;
	sign = 1;
	while (*nptr >= '\t' && *nptr <= '\r')
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -sign;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		rendue = (*nptr - '0') + 10 * rendue;
		nptr++;
	}
	return (rendue * sign);
}
