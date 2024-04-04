/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:35:29 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/01 22:43:19 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	calc_size_malloc(long num)
{
	int	size_malloc;

	size_malloc = 1 + (num < 0);
	if (num < 0)
		num = -num;
	while (num > 9)
	{
		size_malloc++;
		num /= 10;
	}
	return (size_malloc);
}

static	void	add_int_to_string(char *dest, long num, int size_malloc)
{
	char	*tmp;

	tmp = dest;
	if (num < 0)
	{
		*tmp++ = '-';
		size_malloc--;
		num = -num;
	}
	tmp[size_malloc--] = 0;
	while (num > 9)
	{
		tmp[size_malloc--] = (num % 10) + '0';
		num = num / 10;
	}
	tmp[0] = num + '0';
}

static char	*ft_itoa_long(long num)
{
	int		size_malloc;
	char	*str;

	size_malloc = calc_size_malloc(num);
	str = (char *) ft_calloc(sizeof(char) * size_malloc);
	if (str == NULL)
		return (NULL);
	add_int_to_string(str, num, size_malloc);
	return (str);
}

char	*ft_itoa(long n)
{
	return (ft_itoa_long(n));
}
