# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fritzgabler <fritzgabler@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 08:39:49 by fritzgabler       #+#    #+#              #
#    Updated: 2023/05/12 17:33:44 by fritzgabler      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a 										# Prgoram name
CFLAGS ?= -Wall -Wextra -Werror								# Sets C flaggs
CLLIBFT ?= git clone git@github.com:Fgabler42/libft.git 	# Clones libft if not already there
MKLIBFT ?= cd libft && make && cd .. 						# Directs to libft || make || directs back to ft_printf
RMLIBFT ?= rm -f libft


SRCS := ft_dec.c ft_print_str.c ft_printf.h ft_hex.c ft_printf.c ft_ptr.c

OBJS := $(SRCS:.c=.o)
RM   := rm