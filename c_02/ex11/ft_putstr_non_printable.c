/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 23:46:54 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/14 20:55:47 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_hex(char n)
{
	char	*hex;
	int		nn;

	nn = n;
	hex = "0123456789abcdef";
	if (nn > 15)
	{
		ft_putchar(hex[nn / 16]);
	}
	else
	{
		write(1, "0", 1);
	}
	ft_putchar(hex[nn % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int c;
	int d;

	c = 0;
	while (str[c] != '\0')
	{
		d = str[c];
		if (d < 32 || d > 126)
		{
			write(1, "\\", 1);
			ft_hex(d);
		}
		else
		{
			ft_putchar(d);
		}
		c++;
	}
}
