# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/30 20:49:10 by inazaria          #+#    #+#              #
#    Updated: 2024/04/02 22:05:58 by inazaria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_FILES_CONVERSIONS += x_and_X_conversions.c
C_FILES_CONVERSIONS += c_conversion.c
C_FILES_CONVERSIONS += d_and_i_conversions.c
C_FILES_CONVERSIONS += p_conversion.c
C_FILES_CONVERSIONS += s_conversion.c
C_FILES_CONVERSIONS += percent_conversion.c
C_FILES_CONVERSIONS += u_conversion.c


C_FILES_HELPER += ft_atoi.c
C_FILES_HELPER += ft_bzero.c
C_FILES_HELPER += ft_calloc.c
C_FILES_HELPER += ft_itoa.c
C_FILES_HELPER += ft_memcpy.c
C_FILES_HELPER += ft_putstr.c
C_FILES_HELPER += ft_strdup.c
C_FILES_HELPER += ft_strlen.c


SRC_FILES_PARSER      = $(addprefix ./src_parser/, $(C_FILES_PARSER))
SRC_FILES_CONVERSIONS = $(addprefix ./src_conversions/, $(C_FILES_CONVERSIONS))
SRC_FILES_HELPER      = $(addprefix ./src_helper/, $(C_FILES_HELPER))

HEADER_PATH  = ./include/

SRC_FILES    += $(SRC_FILES_CONVERSIONS) $(SRC_FILES_PARSER) $(SRC_FILES_HELPER)
SRC_FILES    += main.c

OBJ_FILES    = $(SRC_FILES:.c=.o)

C_FLAGS      = -Wall -Wextra -Werror -g3
OUTPUT       = libftprintf.a
CC 			 = cc
RM			 = rm -rf

.c.o:
	$(CC) $(CFLAGS) -I $(HEADER_PATH) -c $< -o $(<:.c=.o)

test : $(OBJ_FILES)
	$(CC) $(CFLAGS) $(OBJ_FILES) -I $(HEADER_PATH) -o test

all : $(OUTPUT)

clean :
	$(RM) $(OBJ_FILES)

fclean :
	$(RM) $(OUTPUT) $(OBJ_FILES) 

re : fclean all

$(OUTPUT) : $(OBJ_FILES)
	ar rcs $(OUTPUT) $(OBJ_FILES)

.PHONY: all clean fclean re

