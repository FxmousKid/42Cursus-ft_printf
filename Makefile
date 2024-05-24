# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/30 20:49:10 by inazaria          #+#    #+#              #
#    Updated: 2024/05/24 16:54:29 by inazaria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_FILES_CONVERSIONS  = c_conversion.c
C_FILES_CONVERSIONS += s_conversion.c
C_FILES_CONVERSIONS += p_conversion.c
C_FILES_CONVERSIONS += d_and_i_conversions.c
C_FILES_CONVERSIONS += u_conversion.c
C_FILES_CONVERSIONS += x_and_X_conversions.c
C_FILES_CONVERSIONS += percent_conversion.c
C_FILES_CONVERSIONS += conversion_utils.c

C_FILES_HELPER 		 = ft_putchar.c
C_FILES_HELPER 		+= ft_putstr.c
C_FILES_HELPER 		+= ft_putnbr.c
C_FILES_HELPER 		+= ft_strlen.c
C_FILES_HELPER 		+= length_of_num.c

C_FILES_PARSER 		= parsing_utils.c

SRC_FILES_CONVERSIONS_DIR = ./src_conversion/
SRC_FILES_CONVERSIONS = $(addprefix $(SRC_FILES_CONVERSIONS_DIR), $(C_FILES_CONVERSIONS))

SRC_FILES_HELPER_DIR = ./src_helper/
SRC_FILES_HELPER = $(addprefix $(SRC_FILES_HELPER_DIR), $(C_FILES_HELPER))

SRC_FILES_PARSER_DIR = ./src_parser/
SRC_FILES_PARSER = $(addprefix $(SRC_FILES_PARSER_DIR), $(C_FILES_PARSER))

SRC_FILES    = $(SRC_FILES_PARSER) $(SRC_FILES_CONVERSIONS) $(SRC_FILES_HELPER)
SRC_FILES    += ft_printf.c

OBJ_FILES    = $(SRC_FILES:.c=.o)

INCLUDE 	 = ./include/

C_FLAGS      = -Wall -Wextra -Werror -g3
NAME         = libftprintf.a
CC 			 = clang
RM			 = rm -rf

.c.o:
	$(CC) $(C_FLAGS) -I $(INCLUDE) -c $< -o $(<:.c=.o)

all : $(NAME)

clean :
	$(RM) $(OBJ_FILES)

fclean :
	$(RM) $(NAME) $(OBJ_FILES)

re : fclean all

$(NAME) : $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

.PHONY: all clean fclean re
