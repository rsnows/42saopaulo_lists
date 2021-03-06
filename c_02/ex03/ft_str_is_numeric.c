/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 18:35:19 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/14 00:43:17 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int c;
	int d;

	c = 0;
	while (str[c] != '\0')
	{
		d = str[c];
		if (d < 48 || d > 57)
		{
			return (0);
		}
		c++;
	}
	return (1);
}
