/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 23:45:40 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/03 16:49:19 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/conversions.h"
#include <stdlib.h>

static int	calc(long num)
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

void	make_hexa_ptr(char *tab, void *ptr)
{
	char		*tmp;
	uintptr_t	*nb;

	nb = (uintptr_t *) ptr;
	tab[0] = '0';
	tab[1] = 'x';
	tmp = (char *) ft_calloc(sizeof(char) * (calc((long) nb) + 1));
	if (tmp == NULL)
		return ;
	add_int_to_string(tmp, (long) nb, calc((long) nb), "0123456789abcdef");
	ft_memcpy(tab + 2, tmp, ft_strlen(tmp));
	tab[ft_strlen(tmp) + 2] = 0;
	free(tmp);
}

va_list	p_conversion(va_list args)
{
	char	*rendue;
	void	*ptr;

	ptr = va_arg(args, void *);
	if (ptr == NULL)
	{
		ft_putstr("(null)");
		return (args);
	}	
	rendue = (char *) ft_calloc(sizeof(char) * 20);
	if (rendue == NULL)
		return (args);
	make_hexa_ptr(rendue, ptr);
	ft_putstr(rendue);
	free(rendue);
	return (args);
}
