/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_and_X_conversions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:59:49 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/04 00:39:41 by inazaria         ###   ########.fr       */
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

t_args	lower_x_conversion(t_args s_args)
{
	int		num;
	int		len;

	num = va_arg(s_args.args, int);
	ft_putnbr_base(num, "0123456789abcdef");
	len = length_of_num(num, "0123456789abcdef");
	s_args.rendue += len;
	return (s_args);
}

t_args	upper_x_conversion(t_args s_args)
{
	int		num;
	int		len;

	num = va_arg(s_args.args, int);
	ft_putnbr_base(num, "0123456789ABCDEF");
	len = length_of_num(num, "0123456789ABCDEF");
	s_args.rendue += len;
	return (s_args);
}
