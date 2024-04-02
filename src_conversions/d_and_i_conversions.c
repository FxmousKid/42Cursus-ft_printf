/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_and_i_conversions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 21:50:27 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/02 22:02:25 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/conversions.h"

char	*d_and_i_conversions(int num)
{
	char	*tab;

	tab = ft_itoa(num);
	return (tab);
}
