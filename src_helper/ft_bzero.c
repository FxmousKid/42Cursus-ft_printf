/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 02:05:31 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/01 22:37:13 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/conversions.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	counter;

	if (s == NULL)
		return ;
	counter = 0;
	while (counter < n)
		((char *)s)[counter++] = 0;
	return ;
}
