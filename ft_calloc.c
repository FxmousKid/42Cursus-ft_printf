/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 02:05:07 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/01 22:41:53 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t total)
{
	void	*tab;

	if (total > ULONG_MAX)
		return (NULL);
	tab = malloc(total);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, total);
	return (tab);
}
