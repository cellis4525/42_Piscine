#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cellis <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/07 14:34:28 by cellis            #+#    #+#              #
#    Updated: 2018/08/09 16:50:39 by cellis           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#if you type "make" in this directory to execute this makefile, it will clear
# the contents of OUTPUT/srcs and OUTPUT/includes, then extract out the prototypes
# for all of the functions listed in SRC, put those together into a .h file, 
# save the .h file to OUTPUT/includes and then copy all of the .c files listed
# in SRC to OUTPUT/srcs. Then you can copy the OUTPUT directory to the
# dayXX directory so that the srcs and includes directories are in the same
# directory as your exercises. You could also copy them directly into your
# exercise if they have different needs.
#
# make clean == will clear the folders OUTPUT/srcs and OUTPUT/includes
#
# You will need to add your 42 header to the .h file, but everything else
# should work just fine.

SRC = ft_atoi.c ft_strlen.c 



#ft_add.c \
	  ft_atoi.c \
	  ft_count_if.c \
	  ft_div.c \
	  ft_foreach.c \
	  ft_is_negative.c \
	  ft_is_prime.c \
	  ft_is_sort.c \
	  ft_iterative_power.c \
	  ft_iterative_factorial.c \
	  ft_mod.c ft_print_numbers.c \
	  ft_putchar.c \
	  ft_putnbr.c \
	  ft_putstr.c \
	  ft_range.c \
	  ft_recursive_factorial.c \
	  ft_recursive_power.c \
	ft_rev_params.c \
	  ft_sort_params.c \
	  ft_split_whitespaces.c \
	  ft_sqrt.c \
	  ft_str_is_alpha.c \
	  ft_str_is_lowercase.c \
	  ft_str_is_printable.c \
	  ft_str_is_uppercase.c \
	  ft_strcapitalize.c \
	  ft_strcat.c \
	  ft_strcmp.c \
	  ft_strcpy.c \
	  ft_strdup.c \
	  ft_strlcat.c \
	  ft_strlen.c \
	  ft_strncat.c \
	  ft_strncmp.c \
	  ft_strncpy.c \
	  ft_strstr.c \
	  ft_strupcase.c \
	  ft_sub.c \
	  ft_swap.c \
	  ft_ultimate_div_mod.c \
	  ft_ultimate_ft.c \
	  ft_ultimate_range.c

NAME = prototypes.h
	
all: $(NAME)
	cp $(SRC) ../OUTPUT/srcs

prototypes.h: $(SRC)
	sh ./make_h.sh
	mv prototypes.h ../OUTPUT/includes

%.c: clean

clean:
	find ../OUTPUT/srcs -type f -delete
	find ../OUTPUT/includes -type f -delete

re: clean all
