/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 23:45:40 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/04 00:39:35 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/conversions.h"

static	void	ft_putnbr_base(long num, char *base)
{
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
	}
	if (num > 15)
	{
		ft_putnbr_base(num / 16, base);
		ft_putchar(base[num % 16]);
	}
	else
		ft_putchar(base[num]);
}

int	make_hexa_ptr(void *ptr)
{
	uintptr_t	*nb;
	int			len_ptr;

	nb = (uintptr_t *) ptr;
	ft_putstr("0x");
	ft_putnbr_base((long) nb, "0123456789abcdef");
	len_ptr = length_of_num((long) nb, "0123456789abcdef");
	return (len_ptr + 2);
}

t_args	p_conversion(t_args s_args)
{
	void	*ptr;
	int		len_ptr;

	ptr = va_arg(s_args.args, void *);
	if (ptr == NULL)
	{
		ft_putstr("(null)");
		s_args.rendue += 6;
		return (s_args);
	}
	len_ptr = make_hexa_ptr(ptr);
	s_args.rendue += len_ptr;
	return (s_args);
}
