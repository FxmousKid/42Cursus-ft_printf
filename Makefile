# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/30 20:49:10 by inazaria          #+#    #+#              #
#    Updated: 2024/04/04 13:20:45 by inazaria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_FILES_CONVERSIONS += x_and_X_conversions.c
C_FILES_CONVERSIONS += c_conversion.c
C_FILES_CONVERSIONS += d_and_i_conversions.c
C_FILES_CONVERSIONS += p_conversion.c
C_FILES_CONVERSIONS += s_conversion.c
C_FILES_CONVERSIONS += percent_conversion.c
C_FILES_CONVERSIONS += u_conversion.c
C_FILES_CONVERSIONS += conversion_utils.c

C_FILES_HELPER += ft_atoi.c
C_FILES_HELPER += ft_bzero.c
C_FILES_HELPER += ft_calloc.c
C_FILES_HELPER += ft_itoa.c
C_FILES_HELPER += ft_memcpy.c
C_FILES_HELPER += ft_putstr.c
C_FILES_HELPER += ft_strdup.c
C_FILES_HELPER += ft_strlen.c
C_FILES_HELPER += ft_putnbr.c
C_FILES_HELPER += ft_putchar.c
C_FILES_HELPER += length_of_num.c

C_FILES_PARSER += parsing_utils.c

SRC_FILES    += $(C_FILES_PARSER) $(C_FILES_CONVERSIONS) $(C_FILES_HELPER) ft_printf.c
OBJ_FILES    = $(SRC_FILES:.c=.o)

C_FLAGS      = -Wall -Wextra -Werror -g3
NAME         = libftprintf.a
CC 			 = cc
RM			 = rm -rf

.c.o:
	$(CC) $(C_FLAGS) -I . -c $< -o $(<:.c=.o)

all : $(NAME)

clean :
	$(RM) $(OBJ_FILES)

fclean :
	$(RM) $(NAME) $(OBJ_FILES)

re : fclean all

$(NAME) : $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

.PHONY: all clean fclean re
