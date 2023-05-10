/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:13:24 by fgabler           #+#    #+#             */
/*   Updated: 2023/05/10 15:33:31 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	put_hex(unsigned int num, const char format, int *ret_len);

void	ft_hex(unsigned int num, const char format, int *ret_len)
{
	if (num == 0)
		(write(1, "0", 1));
	else
		put_hex(num, format, ret_len);
}

static void	put_hex(unsigned int num, const char format, int *ret_len)
{
	if (num >= 16)
	{
		put_hex((num / 16), format, ret_len);
		put_hex((num % 16), format, ret_len);
	}
	else
		if (num <= 9)
			put_char_mod((num + 48), ret_len);
		else if (format == 'x')
			put_char_mod(((num - 10) + 'a'), ret_len);
		else if (format == 'X')
			put_char_mod(((num - 10) + 'A'), ret_len);
}