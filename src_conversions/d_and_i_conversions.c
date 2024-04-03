/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_and_i_conversions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 21:50:27 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/03 16:06:44 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/conversions.h"

va_list	d_and_i_conversions(va_list args)
{
	int		num;

	num = va_arg(args, int);
	ft_putnbr(num);
	return (args);
}
