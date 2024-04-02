/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 23:50:44 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/02 22:06:37 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/conversions.h"

void test_conversions(void)
{
	char *str = "Hello World!";
	printf("Testing s conversion\n");
	printf("'%s'\n", str);
	char *str2 = s_conversion(str);
	ft_putstr("'");
	ft_putstr(str2);
	ft_putstr("'\n\n");
	free(str2);

	printf("Testing d conversion\n");
	int num = 2143434343;
	printf("'%d'\n", num);
	char *num2 = d_and_i_conversions(num);
	ft_putstr("'");
	ft_putstr( num2);
	ft_putstr("'\n\n");
	free(num2);

	printf("Testing i conversion\n");
	printf("'%i'\n", num);
	char *num3 = d_and_i_conversions(num);
	ft_putstr("'");
	ft_putstr(num2);
	ft_putstr("'\n\n");
	free(num2);

	printf("Testing x conversion\n");
	printf("'%x'\n", num);
	char *num4 = lower_x_conversion(num);
	ft_putstr("'");
	ft_putstr(num2);
	ft_putstr("'\n\n");
	free(num2);

	printf("Testing X conversion\n");
	printf("'%X'\n", num);
	char *num5 = upper_x_conversion(num);
	ft_putstr("'");
	ft_putstr(num2);
	ft_putstr("'\n\n");
	free(num2);

	printf("Testing p conversion\n");
	printf("'%p'\n", &num);
	char *num6 = p_conversion(&num);
	ft_putstr("'");
	ft_putstr(num2);
	ft_putstr("'\n\n");
	free(num2);

	printf("Testing c conversion\n");
	char c = 'c';
	printf("'%c'\n", c);
	char *c2 = c_conversion(c);
	ft_putstr("'");
	ft_putstr(c2);
	ft_putstr("'\n\n");
	free(c2);

	printf("Testing u conversion\n");
	unsigned int u = 4200000000;
	printf("'%u'\n", u);
	char *u2 = u_conversion(u);
	ft_putstr("'");
	ft_putstr(u2);
	ft_putstr("'\n\n");
	free(u2);

}


int main(void)
{
	test_conversions();
	return (0);
}


