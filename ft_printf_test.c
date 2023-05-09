/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgabler <fgabler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:08:07 by fgabler           #+#    #+#             */
/*   Updated: 2023/05/09 17:39:07 by fgabler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	check;
	int	test;
	int	i;
	int				tmp;

	check = 90;
	test = 90;
	i = 0;
	// while (test != 0)
	// {
	// 	tmp =
	// }
	printf("Pointer-adress: %lu\n", &i);
	printf("Pointer-adress: %p\n", &i);
	printf("Orginal This is hex: %x", i);
}