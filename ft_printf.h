/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:26:42 by fgabler           #+#    #+#             */
/*   Updated: 2023/05/10 15:13:10 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF


# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>


static void	scan_restrict(va_list ap, const char *_restrict_, int *ret_len);
void		put_char_mod(char _restrict_, int *ret_len);
void		ft_hex(unsigned int num, const char format, int *ret_len);
void		ft_printf_str(const char *ret_from_arg, int *ret_len);

#endif