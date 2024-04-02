/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 22:19:52 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/02 22:08:27 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/conversions.h"

char	*c_conversion(char c)
{
	char	*result;

	result = (char *) malloc(sizeof(char) * 2);
	if (result == NULL)
		return (NULL);
	result[0] = c;
	result[1] = '\0';
	return (result);
}
