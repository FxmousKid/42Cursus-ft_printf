/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_conversion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 23:45:40 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/02 21:54:57 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/conversions.h"
#include <stdint.h>

char	*write_nil_str(char *str)
{
	char	*tab;

	tab = (char *) ft_calloc(sizeof(char) * 6);
	if (tab == NULL)
		return (NULL);
	str[0] = '(';
	str[1] = 'n';
	str[2] = 'i';
	str[3] = 'l';
	str[4] = ')';
	str[5] = 0;
	return (tab);
}

void	make_hexa_ptr(char *tab, void *ptr)
{
	char		*tmp;
	uintptr_t	*nb;

	nb = (uintptr_t *) ptr;
	tab[0] = '0';
	tab[1] = 'x';
	tmp = lower_x_conversion((long) nb);
	ft_memcpy(tab + 2, tmp, ft_strlen(tmp));
	tab[ft_strlen(tmp) + 2] = 0;
	free(tmp);
}

char	*p_conversion(void *ptr)
{
	char	*rendue;

	rendue = (char *) ft_calloc(sizeof(char) * 20);
	if (rendue == NULL)
		return (NULL);
	if (ptr == NULL)
		return (write_nil_str(rendue));
	make_hexa_ptr(rendue, ptr);
	return (rendue);
}
