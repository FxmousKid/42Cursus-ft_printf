/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:41:52 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/01 22:40:26 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_H
# define CONVERSIONS_H

# include <stdlib.h>
# include <unistd.h>
#include <limits.h>
# include <stdint.h>
# include <stdio.h>

// Helper functions
int		ft_atoi(char *nptr);
size_t	ft_strlen(const char *s);
void	ft_putstr(char *str);
char	*ft_itoa(long n);
char	*write_nil_str(char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_calloc(size_t total);
char	*ft_strdup(const char *s1);
void	ft_bzero(void *s, size_t n);


// Conversion functions
char	*upper_x_conversion(long num);
char	*lower_x_conversion(long num);
char	*p_conversion(void *ptr);
char	*d_and_i_conversions(int num);

#endif
