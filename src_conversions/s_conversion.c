/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 22:01:08 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/03 16:52:11 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/conversions.h"

va_list	s_conversion(va_list args)
{
	char	*result;

	result = va_arg(args, char *);
	if (result == NULL)
	{
		ft_putstr("(null)");
		return (args);
	}
	ft_putstr(result);
	return (args);
}
