/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:08:44 by fgabler           #+#    #+#             */
/*   Updated: 2023/05/10 15:32:41 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
	int	hex;
	int				ret_len;
	char			c;

	hex = 43234553;
	c = 'X';
	ret_len = 0;

	ft_hex(hex, c, &ret_len);
	printf("\ncheck: %X", hex);


}