/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:54:22 by fgabler           #+#    #+#             */
/*   Updated: 2023/05/09 16:36:49 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_str(const char *ret_from_arg, int *ret_len)
{
	int	i;

	i = 0;
	while (ret_from_arg[i++])
		print(ret_from_arg, ret_len);
}