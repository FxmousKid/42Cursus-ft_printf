/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_of_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 23:01:48 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/04 00:36:30 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	length_of_num(long num, char *base)
{
	int	len;
	int	base_len;

	base_len = ft_strlen(base);
	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		num = num / base_len;
		len++;
	}
	return (len);
}
