/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fritzgabler <fritzgabler@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:26:42 by fgabler           #+#    #+#             */
/*   Updated: 2023/05/13 19:32:49 by fritzgabler      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF


# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>

int			ft_printf(const char *_restrict_, ...);
void		put_char_mod(char _restrict_, int *ret_len);
void		ft_print_hex(unsigned int num, const char format, int *ret_len);
void		ft_print_str(const char *ret_from_arg, int *ret_len);
void		ft_print_ptr(unsigned long int num, int *ret_len);
void		ft_print_num(int ret_from_arg, int *ret_len);
void		ft_print_uns(unsigned int ret_from_arg, int *ret_len);

#endif