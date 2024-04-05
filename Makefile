# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inazaria <inazaria@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/30 20:49:10 by inazaria          #+#    #+#              #
#    Updated: 2024/04/05 17:56:04 by inazaria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C_FILES_CONVERSIONS = $(wildcard src/conversion/*.c)
C_FILES_HELPER 		= $(wildcard src/helper.c)
C_FILES_PARSER 		= $(wildcard src/parser/*.c)

SRC_FILES    = $(C_FILES_PARSER) $(C_FILES_CONVERSIONS) $(C_FILES_HELPER)
SRC_FILES    += ft_printf.c

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
