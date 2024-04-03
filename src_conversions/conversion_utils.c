/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 23:17:54 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/03 16:41:57 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/conversions.h"

conversionFuncPtr	*make_conversion_table()
{
	conversionFuncPtr *conversion_table;

	conversion_table = ft_calloc(sizeof(conversionFuncPtr) * 127);
	if (conversion_table == NULL)
		return (NULL);
	conversion_table['c'] = c_conversion;
	conversion_table['s'] = s_conversion;
	conversion_table['p'] = p_conversion;
	conversion_table['d'] = d_and_i_conversions;
	conversion_table['i'] = d_and_i_conversions;
	conversion_table['u'] = u_conversion;
	conversion_table['x'] = lower_x_conversion;
	conversion_table['X'] = upper_x_conversion;	
	conversion_table['%'] = percent_conversion;
	return (conversion_table);
}
