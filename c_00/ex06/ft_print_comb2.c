/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 17:47:41 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/04 19:26:50 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb1(char a, char b)
{
	char c;
	char d;

	c = '0';
	while (c <= '9')
	{
		d = '0';
		while (d <= '9')
		{
			if ((a == c && b < d) || (a < c))
				print(a, b, c, d);
			d++;
		}
		c++;
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			ft_print_comb1(a, b);
			b++;
		}
		a++;
	}
}
