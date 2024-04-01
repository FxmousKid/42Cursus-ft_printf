/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 22:19:52 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/01 23:33:34 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/conversions.h"

char	*c_conversion(char c)
{
	char	*result;

	result = ft_strdup(&c);
	if (result == NULL)
		return (NULL);
	return (result);
}
