/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:47:10 by fgabler           #+#    #+#             */
/*   Updated: 2023/05/09 16:42:23 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	scan_restrict(va_list ap, const char *_restrict_, int *ret_len);
static void	print(char _restrict_, int *ret_len);
static void	is_it_percent(va_list ap, const char *_restrict_, int *ret_len, int *i);

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
			print(_restrict_[i++], ret_len);
		else
			is_it_percent(ap, _restrict_, ret_len, &i);
	}
}

static void	is_it_percent(va_list ap,
			const char *_restrict_, int *ret_len, int *i)
{

		if (_restrict_[*i] == '%' && _restrict_[*i + 1] == 'p')
		// else if (_restrict_[i] == '%' && _restrict_[i + 1] == 'd')
		// else if (_restrict_[i] == '%' || _restrict_[i + 1] == 'i')
		// else if (_restrict_[i] == '%' || _restrict_[i + 1] == 'u')
		// else if (_restrict_[i] == '%' || _restrict_[i + 1] == 'x')
		// else if (_restrict_[i] == '%' || _restrict_[i + 1] == 'X')
		// else if (_restrict_[i] == '%' || _restrict_[i + 1] == '%')

		if (_restrict_[*i] == '%' && _restrict_[*i + 1] == 'c')
			return (print(va_arg (ap, char), ret_len), i += 2);
		if (_restrict_[*i] == '%' && _restrict_[*i + 1] == 's')
			retrun (ft_printf_str(va_arg (ap, char*), ret_len), i += 2);
}

static void	print(char _restrict_, int *ret_len)
{
	*ret_len += write(1, &_restrict_, 1);
}
