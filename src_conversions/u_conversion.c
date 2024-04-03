/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:02:37 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/03 16:12:35 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/conversions.h"

va_list	u_conversion(va_list args)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	ft_putnbr(n);
	return (args);
}
