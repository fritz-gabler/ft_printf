/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fritzgabler <fritzgabler@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:54:22 by fgabler           #+#    #+#             */
/*   Updated: 2023/05/11 20:03:08 by fritzgabler      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_str(const char *ret_from_arg, int *ret_len)
{
	int	i;

	i = 0;
	while (ret_from_arg[i])
		put_char_mod(ret_from_arg[i++], ret_len);
}