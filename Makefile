# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/12 08:39:49 by fritzgabler       #+#    #+#              #
#    Updated: 2023/05/12 19:35:52 by fgabler          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a 										# Prgoram name
CFLAGS ?= -Wall -Wextra -Werror								# Sets C flaggs
CLLIBFT ?= git clone git@github.com:Fgabler42/libft.git 	# Clones libft if not already there
MKLIBFT ?= cd libft && make && cd .. 						# Directs to libft || make || directs back to ft_printf
RMLIBFT ?= rm -rf libft
FILES := obj src


SRCS := ft_dec.c ft_print_str.c ft_printf.h ft_hex.c ft_printf.c ft_ptr.c

OBJS := $(SRCS:.c=.o)
RM   := rm -rf

all:		$(NAME)

$(NAME):	$(OBJS)
		@ar rcs $@ $^

obj/%.o: src/%.c
	@mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $^

clean:
	@$(RM) $(FILES)

fclean:	clean
	@$(RM) $(FILES) $(NAME)

re:			fclean $(NAME)

