# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cellis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/07 14:34:28 by cellis            #+#    #+#              #
#    Updated: 2018/08/07 16:26:48 by cellis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

vpath %.h includes
vpath %.c srcs

SRC = ft_add.c ft_atoi.c ft_count_if.c ft_div.c ft_foreach.c ft_is_negative.c ft_is_prime.c ft_is_sort.c ft_iterative_power.c ft_iterative_factorial.c ft_mod.c ft_print_numbers.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_range.c ft_recursive_factorial.c ft_recursive_power.c ft_rev_params.c ft_sort_params.c ft_split_whitespaces.c ft_sqrt.c ft_str_is_alpha.c ft_str_is_lowercase.c ft_str_is_printable.c ft_str_is_uppercase.c ft_strcapitalize.c ft_strcat.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strstr.c ft_strupcase.c ft_sub.c ft_swap.c ft_ultimate_div_mod.c ft_ultimate_ft.c ft_ultimate_range.c

NAME = prototypes.h

prototypes.h: $(SRC)
	sh ./srcs/make_h.sh

clean:
	rm -f $(NAME)

re: fclean all
