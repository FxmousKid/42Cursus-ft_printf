/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 22:19:52 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/03 22:43:22 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/conversions.h"

t_args	c_conversion(t_args s_args)
{
	char	c;

	c = va_arg(s_args.args, int);
	ft_putchar(c);
	s_args.rendue++;
	return (s_args);
}
