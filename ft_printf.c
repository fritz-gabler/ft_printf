/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:47:10 by fgabler           #+#    #+#             */
/*   Updated: 2023/05/11 18:02:18 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	scan_restrict_(va_list ap, const char *_restrict_, int *ret_len);
void		put_char_mod(char _restrict_, int *ret_len);
static int	is_it_percent(va_list ap,
				const char *_restrict_, int *ret_len, int *i);

int	ft_printf(const char *_restrict_, ...)
{
	int	ret_len;
	va_list	ap;

	ret_len = 0;
	va_start(ap, _restrict_);
	scan_restrict_(ap, _restrict_, &ret_len);
	return (ret_len);
}

static void	scan_restrict_(va_list ap, const char *_restrict_, int *ret_len)
{
	int	i;

	i = 0;
	while (_restrict_[i])
	{
		if (_restrict_[i] != '%')
			put_char_mod(_restrict_[i++], ret_len);
		else
			is_it_percent(ap, _restrict_, ret_len, &i);
	}
}

static int	is_it_percent(va_list ap,
			const char *_restrict_, int *ret_len, int *i)
{
	*i += 1;
	// if (_restrict_[*i] == 'd')
	// if (_restrict_[*i] == 'i')
	// if (_restrict_[*i] == 'u')
	// if (_restrict_[*i] == 'X')
	// if (_restrict_[*i] == '%')
	if (_restrict_[*i] == 'x')
		return (ft_hex((va_arg (ap, int)), 'x', ret_len), *i += 1);
	if (_restrict_[*i] == 'c')
		return (put_char_mod((va_arg (ap, int) + 48), ret_len), *i += 1);
	if (_restrict_[*i] == 's')
		return (ft_printf_str(va_arg (ap, char *), ret_len), *i += 1);
	if (_restrict_[*i] == 'p')
		ft_ptr()
	return (0);
}

void	put_char_mod(char _restrict_, int *ret_len)
{
	*ret_len += write(1, &_restrict_, 1);
}
