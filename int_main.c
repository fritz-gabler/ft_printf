/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_main.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:08:44 by fgabler           #+#    #+#             */
/*   Updated: 2023/05/11 18:00:36 by fgabler          ###   ########.fr       */
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

	ret_len = ft_printf("Min:\t\t%p\n", &hex);
	printf("ft ret_len:	%d\n", ret_len);

	ret_len = printf("Org:\t\t%p\n", &hex);
	printf("Or ret_len:	%d\n", ret_len);


}