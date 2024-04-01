/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 22:01:08 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/01 22:42:00 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/conversions.h"

char	*s_conversion(char	*str)
{
	char	*result;

	result = ft_strdup(str);
	if (result == NULL)
		return (NULL);
	return (result);
}
