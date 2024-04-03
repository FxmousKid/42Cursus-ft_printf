/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversions.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 17:41:52 by inazaria          #+#    #+#             */
/*   Updated: 2024/04/04 00:43:20 by inazaria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSIONS_H
# define CONVERSIONS_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h> 
# include <stdint.h>
# include <stdio.h>
# include <stdarg.h>

// Typedefs
typedef struct s_args
{
	int		rendue;
	va_list	args;
}				t_args;	
typedef t_args	(*t_conversionFuncPtr)(t_args);

// Helper functions
size_t				ft_strlen(const char *s);
int					ft_atoi(char *nptr);
void				ft_putstr(char *str);
char				*ft_itoa(long n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_calloc(size_t total);
char				*ft_strdup(const char *s1);
void				ft_bzero(void *s, size_t n);
void				ft_putchar(char c);
void				ft_putnbr(long n);
int					length_of_num(long num, char *base);

// Parsing functions
int					parse_arg_count(char *str);
char				parse_next_arg(char *str);
int					parse_closest_arg_idx(char *str);

// Conversion functions
t_args				d_and_i_conversions(t_args s_args);
t_args				upper_x_conversion(t_args s_args);
t_args				lower_x_conversion(t_args s_args);
t_args				p_conversion(t_args s_args);
t_args				percent_conversion(t_args s_args);
t_args				c_conversion(t_args s_args);
t_args				u_conversion(t_args s_args);
t_args				s_conversion(t_args s_args);

t_conversionFuncPtr	*make_conversion_table(void);

// Main function
int					ft_printf(const char *str, ...);

#endif
