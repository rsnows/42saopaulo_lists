/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 13:58:07 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/12 14:49:31 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int div;
	int mod;

	div = 0;
	mod = 0;
	ft_div_mod(4, 2, &div, &mod);
	printf("%d", div);
	printf("%d", mod);
}
