/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 19:26:42 by fgabler           #+#    #+#             */
/*   Updated: 2023/05/09 17:29:45 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF


# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <limits.h>


static void	scan_restrict(va_list ap, const char *_restrict_, int *ret_len);
static void	print(char ap, int *ret_len);
static void	ft_printf_str(va_list ap, int *ret_len);

#endif