/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:36:48 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/07 15:14:04 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char c;
	char d;
	char nn = n + '0';
	char mult;
	char contmax;

	
	mult = '1';
	if (n / 10)
	{
		contmax = contmax + ((n * 10 * mult) + '0');
		mult++;
		ft_print_combn(n / 10);
	}
	else
	{
		max = max + n;
	}

	


}
