/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_and_X_conversions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:59:49 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/02 01:18:37 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversions.h"

static int	calc_size_malloc(long num)
{
	int	size_malloc;

	size_malloc = 1 + (num < 0);
	if (num < 0)
		num = -num;
	while (num > 15)
	{
		size_malloc++;
		num /= 16;
	}
	return (size_malloc);
}

static	void	add_int_to_string(char *dest, long num, int len, char *base)
{
	char	*tmp;

	tmp = dest;
	if (num < 0)
	{
		*tmp++ = '-';
		len--;
		num = -num;
	}
	tmp[len--] = 0;
	while (num > 15)
	{
		tmp[len--] = base[num % 16];
		num = num / 16;
	}
	tmp[0] = base[num];
}

char	*lower_x_conversion(long num)
{
	int		size_malloc;
	char	*str;

	size_malloc = calc_size_malloc(num);
	str = (char *) ft_calloc(sizeof(char) * (size_malloc + 1));
	if (str == NULL)
		return (NULL);
	add_int_to_string(str, num, size_malloc, "0123456789abcdef");
	return (str);
}

char	*upper_x_conversion(long num)
{
	int		size_malloc;
	char	*str;

	size_malloc = calc_size_malloc(num);
	str = (char *) ft_calloc(sizeof(char) * (size_malloc + 1));
	if (str == NULL)
		return (NULL);
	add_int_to_string(str, num, size_malloc, "0123456789ABCDEF");
	return (str);
}
